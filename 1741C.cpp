#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> v(n),sum(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sum[0]=v[0];
	for(int i=1;i<n;i++){
		sum[i]= sum[i-1] + v[i];
	}
	int mini=n;
	for(int i=2;i<=n;i++){
		int d= sum[n-1]/i;
		if(d*i!=sum[n-1]) continue;
		int l=-1,m,lmaxi=0,flag=1;
		for(int j=1;j<=i;j++){
			m=lower_bound(sum.begin(),sum.end(),d*j)-sum.begin();
			if(sum[m]==d*j) lmaxi=max(lmaxi,m-l),l=m;
			else{
				flag=0;
				break;
			}
//			cout<< m<< " ";
		}
//		cout<<":"<<i<<"\n";
		if(flag) mini=min(mini,lmaxi);
	}
	cout<<mini<<"\n";
}
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

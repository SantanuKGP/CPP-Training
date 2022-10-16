#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n,q;
	cin>>t;
	while(t--){
		cin>>n>>q;
		vector<int> v(n),ques(q);
		vector<llu> sum(n+1,0);
		int maxi=0,a;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum[i+1] = sum[i]+v[i];
			if(i){
				v[i]=max(v[i],v[i-1]);
			}
		}
		//for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<":v\n";
		//for(int i=0;i<=n;i++) cout<<sum[i]<<" "; cout<<":sum\n";
		for(int i=0;i<q;i++){
			cin>>a;
			int b= upper_bound(v.begin(),v.end(),a) - v.begin();
			
			cout<< sum[b]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

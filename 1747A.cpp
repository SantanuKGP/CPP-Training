#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

void solve(){
	int n;
	cin>> n;
	vector<int> v(n);
	lli sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		cin>> v[i];
		if(v[i]>=0) sum1+= v[i];
		else sum2+= v[i];
	}
	cout<< abs(abs(sum1)-abs(sum2))<<"\n";
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

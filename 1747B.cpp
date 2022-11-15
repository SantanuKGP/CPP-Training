#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

void solve(){
	int n;
	cin>>n;
	if(n==1){
		cout<<1<<"\n";
		cout<<1<<" "<<3<<"\n";
		return ;
	}
	int m = (n+1)/2;
	cout<<m<<"\n";
	for(int i=0;i<m;i++){
		cout<<(i*6+1)<<" "<<(6*i+6)<<"\n" ;
	}
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

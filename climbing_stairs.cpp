#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	llu n,m;
	while(t--){
		cin>>n>>m;
		int div=n/m+n%m;
		cout<<div<<"\n";
	}
	return 0;
}

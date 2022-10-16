#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	lli t,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if((a+b==c) || (abs(a-b)==abs(c))) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
void solve(){
	int flag=0;
	char buff;
//	cin>>buff; cout<<buff;
//	cin>>buff; cout<<buff;
	
	string x= "RRRRRRRR";
	for(int i=1;i<=8;i++){
		string s;
		cin>>s;
		if(s==x) flag=1;
		cout<<s<<"\n";
	}
	if(flag) cout<<"R\n";
	else cout<<"B\n";
}
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	lli t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

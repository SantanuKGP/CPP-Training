#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		string res="";
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){
				int temp= 10*(s[i-2]-'0')+(s[i-1]-'0');
				char c= 'a' + temp -1;
				i-=2;
				res= c + res;
			}
			else{
				char c= 'a' + s[i]-'0'-1;
				res= c + res;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

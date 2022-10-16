#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false); cin.tie(0);cout.tie(0);
	lli n,t;
	cin>>n;
	map<lli,int>m;
	for(int i=0;i<n;i++){
		cin>>t;
		m[t]=1;
	}
	cout<<m.size()<<endl;
	return 0;
}

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	lli t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a;
		unordered_map<int,int> m;
		int flag=1;
		for(int i=0;i<n;i++){
			cin>>a;
			cout<<a<<" "<<m[a]<<endl;
			if(m[a]){
				flag=0;
//				cout<<a;
				break;
			}
			else m[a]=1;
		}
		if(flag) cout<<"Yes\n"; else cout<<"No\n";
	}
	return 0;
}

/*
6
2
3 2
5
2 1 7 9 7
2
3 1
2
4 1
6
12 10 4 9 9 3
8
11 15 10 12 8 12 16 4
*/

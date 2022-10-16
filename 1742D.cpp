#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
lli gcd(lli a,lli b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	lli t,n;
	cin>>t;
	while(t--){
		cin>> n;
		vector<int> v(1001,-1);
		int r;
		int m=0;
		for(int i=0;i<n;i++) {
			cin>>r;
			v[r]=i+1;
			m=max(r,m);
		}
		int sum,maxi=-1;
		for(int i=1;i<=m;i++){
			sum=0;
			for(int j=i;j<=m;j++){
				if(v[i]!=-1 && v[j]!=-1 && gcd(i,j)==1){
					maxi=max(maxi,v[i]+v[j]);
				}		
			}
		}
		cout<<maxi<<"\n";
	}
	
	return 0;
}

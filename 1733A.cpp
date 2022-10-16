#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>> v[i];
		}
		llu sum=0;
		for(int i=0;i<k;i++){
			int maxi=INT_MIN;
			for(int j=i;j<n;j=j+k){
				maxi= max(maxi,v[j]);
			}
			sum +=maxi;
		}
		cout<<sum<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
		
//	for(int i=0;i<n;i++) cout<<v[i]<<" ";
	int count =0;
	
	for(int i=n-2;i>=0;i--){
		int temp= v[i];
		v[i] = v[i]+ v[i+1];
		if(v[i]==0 ) count++;
	}
	if(v[n-1]==0) count++;
	for(int i=0;i<n;i++) cout<<v[i]<<" ";
	cout<<count<<"\n";
	
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

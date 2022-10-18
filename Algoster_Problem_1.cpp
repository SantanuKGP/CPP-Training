#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

void solve(){
	int n,m,count=0;
	cin>>n>>m;
	vector<int> a(n),b(m);
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++) cin>>a[i],mp[a[i]]=10;
	for(int i=0;i<m;i++) {
		cin>>b[i];
		if(mp[b[i]]%10==0) mp[b[i]]+=1;
	}
	cout<< mp.size()<<" ";
	for(auto i : mp){
		if(i.second >10) count++;
	}
	cout<< count<<"\n";
}
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

int rec(int level,int n, vector<int> pos,int count=0){
	if(level==0) return 1;
	if(level==n) return count;
	int cnt=0;
	for(int i=level;i<n;i++){
		for(int j=0;j<pos.size();j++){
			if(abs(level-j)==abs(i-pos[j])){
				continue;
			}
			else{
				pos[level]=i;
				count +=rec(level+1,n,pos,count+1)+1;
		
			}
		}
	}
	return count;
}
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	cout<<rec(0,n,v)<<"\n";
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

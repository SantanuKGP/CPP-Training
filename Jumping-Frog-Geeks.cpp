#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

void solve(){
	cin>>n;
	vector<int> dp(n+1,0);
	dp[0]=1,dp[1]=1,dp[2]=2;
	for(int i=3;i<=n;i++) dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	
	return dp[n];
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

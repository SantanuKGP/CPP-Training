#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
void solve(){
	int n;
	cin>> n;
	string str;
	cin>> str;
	unordered_set<int> s;
	int count= 0;
	for(int i=0;i<n;i++){
		int freq[10]={0};
		int max_freq =0;
		unordered_set<int> s;
		for(int j=i;j<min(100+i,n);j++){
			int num = str[j]-'0';
			s.insert(str[j]-'0');
			freq[num] +=1;
			max_freq= max(max_freq,freq[num]);
			if(s.size()>=max_freq){
				count++;
			}
			
		}
	}
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

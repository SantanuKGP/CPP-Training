#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q,l,r,x;
	cin>>n>>q;
	vector<int> v(n,0);
	while(q--){
		cin>>l>>r>>x;
		v[l]+=x;
		if(r<n-1) v[r+1]-=x;
	}
	for(int i=1;i<n;i++){
		v[i]+=v[i-1];
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}

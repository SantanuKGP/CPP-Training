#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long unsigned int llu;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;
vi partial_sum(vi v){
	for(int i=1;i<v.size();i++){
		v[i]=v[i]+v[i-1];
	}
	return v;
}
void print(vi v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	lli n,k,q,maxi=0;
	cin>>n>>k>>q;
	vpi v(n);
	for(lli i=0;i<n;i++){
		lli a,b;
		cin>>a>>b;
		v[i]={a,b};
		maxi=max(maxi,b);
	}
	vi v1(maxi+1,0), v2(maxi+1,0);
	for(lli i=0;i<n;i++){
		v1[v[i].first]+=1;
		if(v[i].second<maxi) v1[v[i].second+1]-=1;
	}
	v1=partial_sum(v1);
	for(lli i=0;i<maxi;i++){
		if(v1[i]>=k) v2[i]=1;
	}
	v2=partial_sum(v2);
	for(lli i=0;i<q;i++){
		lli a,b;
		cin>>a>>b;
		if(b>maxi) b=maxi;
		cout<<(v2[b]-v2[a-1])<<"\n";
	}
	return 0;
}

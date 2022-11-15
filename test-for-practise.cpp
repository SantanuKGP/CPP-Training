#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
int main(){
	vector <int> s={1,2,7,2};
	vector <int> s1={1,4,3,2};
	cout<< (-6%3)<<"\n";
	for(auto& i:s){
		cout<<i<<" ";
	}
	map<vector<int>,int> ms;
	ms[s]=1;
	ms[s1]=1;
	for(auto i:ms){
		for(auto& j:i.first){
			cout<< j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

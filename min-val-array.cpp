#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
bool comp(int a, int b)
{
 return (a < b);
}
void solve(){
	cout<< min({ 1, 2, 3, 4, 5, 0, -1, 7 }, comp)<<"\n";
	cout<< min({ 1, 2, 3, 4, 5, 0, -1, 7 })<<"\n";
	int arr[]={ 1, 2, 3, 4, 5, 0, -1, 7 };
	
}
int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}

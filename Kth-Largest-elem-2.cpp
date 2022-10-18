#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

int KthLargest(int arr[], int n, int k) {
    // Your code here
    priority_queue<int> q(arr,arr+n);
    for(int i=0;i<k-1;i++){
        q.pop();
    }
    return q.top();
}
void solve(){

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

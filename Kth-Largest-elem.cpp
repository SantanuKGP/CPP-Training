#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;

int KthLargest(int arr[], int n, int k) {
    // Your code here
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<k;i++){
        q.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(q.top()<arr[i]){
            q.pop();
            q.push(arr[i]);
        }
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

//	https://practice.geeksforgeeks.org/problems/kth-largest-element-in-a-stream2220/1
#include<bits/stdc++.h>
typedef long long int lli;
typedef long long unsigned int llu;
using namespace std;
vector<int> kthLargest(int k, int arr[], int n) {
    // code here
    priority_queue<int,vector<int>,greater<int>> q(arr,arr+k);
    vector<int> v(n,-1);
    v[k-1]=q.top();
    for(int i=k;i<n;i++){
        if(arr[i]>q.top()){
            q.push(arr[i]);
            q.pop();
            v[i]=q.top();
        }
        else v[i]=q.top();
    }
    return v;
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

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]+=1;
        }
        int sum=0;
        for(auto i:m){
        	int p=i.first;
            sum+=m[p] * m[k-p];
        }
        if(k%2)
        return sum/2;
        else return (sum-m[k/2])/2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
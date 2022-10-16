//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int target) {
        // Your code goes here
        unordered_map<int,vector<int>> m;
        vector<vector<int>> v,ans;
        int len=arr.size();
        unordered_map<int,int> umap;
        map<vector<int>,int> map;
        for(int i=0;i<len;i++){
        	umap[arr[i]]+=1;
		}
		
        for(int i=0;i<len-2;i++){
            for(int j=i+1;j<len-1;j++){
                for(int k=j+1;k<len;k++){
                    int temp=arr[i]+arr[j]+arr[k];
                    if(umap[target-temp]){
                    	unordered_map<int,int> check;
                    	check[arr[i]]+=1,check[arr[j]]+=1,check[arr[k]]+=1,check[target-temp]+=1;
                    	int flag=1;
                    	for(auto it: check) if(it.second<= umap[it.first]) continue; else {
                    		flag=0;break;
						}
                    	if(!flag) continue;
                    	vector<int> s= {arr[i],arr[j],arr[k],target-temp};
                    	sort(s.begin(),s.end());
                    	if(!map[s]){                  	
                    		map[s]=1;
						}
					}
                }
            }
        }
        for(auto i: map){
        	ans.push_back(i.first);
		}
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	ios_base:: sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
        	int sum=0;
            for (int &u : v) {
                cout << u << " ";
                sum+=u;
            }
            cout <<":"<<sum<< "\n";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
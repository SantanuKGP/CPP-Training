#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rearrange(long long *arr, int n) { 
		unordered_map<int,long long> m;
//		if(n%2) n--;
//		for(int i=n-1;i>0;i=i-2){
//			m[i]=arr[i];
//			arr[i]=arr[i/2];	
//		}
//		if(n%2) n++;
//		for(int i=0;i<n;i=i+2){
//			m[i]=arr[i];
//			
//		}
		for(int i=0;i<n;i++){
			m[i]=arr[i];
		}
		for(int i=0;i<n;i++){
			if(i%2) arr[i]=m[i/2]; else arr[i]=m[n-1-i/2];
		}	
	}
};

int main() 
{
	ios_base:: sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
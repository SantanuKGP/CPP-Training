// 
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int index=0,count=0;
        while(index<n-1){
            int k=index;
            count++;
            if(arr[index]+index>=n-1) break;
            int maxi=INT_MIN;
            for(int i=1;i<=arr[k];i++){
            	if(arr[k+i]==0) continue;
            	if(maxi< k+arr[i+k]+i){
            		index=k+i;
            		maxi=k+arr[i+k]+i;
				}
            }
            if(index==k) return -1;
//            cout<<"count= "<< count<<",position: "<<index<<",next step= "<<maxi<<"\n";
        }
        return count;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
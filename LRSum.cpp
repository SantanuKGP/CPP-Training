#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n,q,l,r;
    lli m=1e9+7;
    cin>>n>>q;
    vector<lli> a(n), sum(n+1,0);
    for(lli i=0;i<n;i++) cin>>a[i];
    for(lli i=1;i<=n;i++){
    	sum[i]=(sum[i-1]+ a[i-1]%m)%m;
	}
    while(q--){
        cin>>l>>r;
        cout<<((sum[r]-sum[l-1]+m)%m)<<"\n";
    }
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    int dp[n+1];
    int k =1;
    for(int i =0;i<n;i++){
        cin>>a[i];
        dp[k++] = a[i];
        
    }
    int ans=0;
    dp[0] = 0;
    dp[1] = a[0];
    for(int i = 2;i<=n;i++){
        
        for(int j =i;j>=1;j--){
            
            ans = max(ans,(dp[i-j] + dp[j]));
        }
        dp[i] = ans;
       // cout<<ans<<endl;
    }
    cout<<dp[n];
}

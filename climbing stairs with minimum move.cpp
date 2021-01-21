
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dp[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = INT_MAX;
    }
    
    dp[0] = 0;
    
    
     for(int i=0;i<=n;i++){
         for(int lmt = i,j=min(n-1,i+a[i]);j>lmt;j--){
         if(dp[j]>dp[i]+1){
             dp[j] = dp[i]+1;
         }
         else
          break;
       }
       
    }
    cout<<dp[n-1];
}

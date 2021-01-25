

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n =  s1.size();
    int m =  s2.size();
   
   int dp[n+1][m+1];
    int ans = 0;
     for (int i = 0; i <= n; i++)
     dp[i][0] = 0;
    for (int i = 0; i <= m; i++)
     dp[0][m] = 0;
    
    for (int i = 1; i <=n; i++){
     for (int j = 1; j <= m; j++){
         
         if(s1[i-1] == s2[j-1]){
             dp[i][j] = 1+ dp[i-1][j-1];
           //  cout<<dp[i][j]<<" ";
             ans = max(ans,dp[i][j]);
         }
         else {
             dp[i][j] = 0;
           //  cout<<dp[i][j]<<" ";
         }
     }
     //cout<<endl;
     
    }
    cout<<ans;
}

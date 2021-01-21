
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,k;
    cin>>n>>k;
    int dp[n][k];
    for(int i = 0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>dp[i][j];
        }
    }
     for(int i = n-1;i>=0;i--){
            for(int j =k-1;j>=0;j--){
                
                if(i == n-1){
                    if(j == k-1){
                        dp[i][j] = dp[n-1][k-1];
                    }
                    else{
                        dp[i][j] += dp[i][j+1];
                    }
                }
                else if(i<n-1){
                    if(j == k-1){
                        dp[i][j] += dp[i+1][j];
                    }
                    else{
                        dp[i][j] += min(dp[i+1][j],dp[i][j+1]);
                    }
                }
            }
        }
        cout<<dp[0][0];
}

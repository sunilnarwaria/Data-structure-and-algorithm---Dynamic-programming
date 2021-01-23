


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m = s2.size();
    int dp[n+1][m+1];
    for(int i = n;i>=0;i--){
        for(int j= m;j>=0;j--){
                dp[n][j] = 0;
           
                dp[i][m] = 0;
                if(s1[i] == s2[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }
                else{
                    dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                }
         
        }
    }
    cout<< dp[0][0];
}

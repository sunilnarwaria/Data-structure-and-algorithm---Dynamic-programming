
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
       vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;
        dp[1] =1;
         for(int i = 2; i<=n;i++){
              int min= 1e9;
             for(int j=0;j*j<=i;j++){
                 int rem = i -j*j;
                 if(dp[rem] < min){
                     min = dp[rem];

                 }
                 
             }
             dp[i] = min+1;
         }
    
        cout<< dp[n];
    }

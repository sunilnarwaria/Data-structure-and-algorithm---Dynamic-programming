
// formula used => f(n) = f(n-1) + (n-1)*f(n-2);
//using recursive tree reach the approach

#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int n;
      cin>>n;
      int dp[n+1];
      dp[1] = 1;
      dp[2] = 2;
      for(int i =3;i<=n;i++){
          dp[i] = dp[i-1] + (i-1)*dp[i-2];
      }
      cout<<dp[n];
 }

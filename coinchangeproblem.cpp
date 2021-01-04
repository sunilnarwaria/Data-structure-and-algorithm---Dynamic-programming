

#include <bits/stdc++.h>
using namespace std;


 int32_t main()
{
   
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int amt;
     cin>>amt;
    // vector<int>dp;
    int dp[amt+1]={0};
  //  vector<int>dp(amt+1);
     dp[0] =1;
     //sizeof(dp)/sizeof(dp[0])
     for(int i=0;i<n;i++){
         for(int j=a[i];j<sizeof(dp)/sizeof(dp[0]);j++){
             dp[j] += dp[j-a[i]];
         }
     }
     cout<<dp[amt]<<endl;
   return 0;

}







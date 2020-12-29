

#include<bits/stdc++.h>
using namespace std;
  int maxsum(int a[],int n,int idx,int dp[]){
      if(idx >= n) return 0;
      if(dp[idx]>0) return dp[idx];
      int f1 = maxsum(a,n,idx+1,dp);
      int f2 = a[idx] + maxsum(a,n,idx+2,dp);
       dp[idx] = max(f1,f2);
      return dp[idx];
  }
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i= 0;i<n;i++){
        cin>>a[i];
    }
    int dp[n+1]={0};
    cout<<maxsum(a,n,0,dp);
}
// optimized solution comes using include and exclude approach

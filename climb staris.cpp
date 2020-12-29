#include <iostream>
using namespace std;
 
int cs(int n,int dp[]){
    // write your code here
    
     if(n==0){
         return 1;
     }
     if(n<0){
         return 0;
     }
     if(dp[n] >0){
         return dp[n];
     }
    int f1 = cs(n-1,dp);
    int f2 = cs(n-2,dp);
    int f3 = cs(n-3,dp);
    dp[n] = f1+f2+f3;
     
    int ans = f1+f2+f3;
    dp[n] = ans;
    return dp[n];

}

int main(){
    int n;
    cin>>n;
     int dp[n+1]={0};
    cout<<cs(n,dp)<<endl;
}

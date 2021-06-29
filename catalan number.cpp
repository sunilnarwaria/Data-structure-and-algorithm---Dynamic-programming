// catalan variations
// 1. Catalan numbers
// 2. No. of BST
// 3. count of valleya and mountain
// 4. Count of brackets
// 5. circle and cords  -> reducible to catalan number just n/2 ka catalan nikal lo
// 6. Number of ways of triangulation  -> n-2 ka catalan nikal lo
// 7. Minimum score of triangulation
// 8.
// 9.




#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //int dp[n+1];
    vector<int>dp(n+1,0);
    dp[0] =1;
    dp[1] =1;
    for(int i=2;i<=n;i++){
        for(int j =0 ;j<i;j++){
            dp[i] += (dp[j]*dp[i-j-1]);
        }
    }
    cout<<dp[n];
}

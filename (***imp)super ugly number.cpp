
 int nthSuperUglyNumber(int k, vector<int>& p) {
        
         long int n = p.size();
         vector<long int> dp(k,INT_MAX);
        vector<long int>last(n,0);
        dp[0] =1;
        for(long int i = 1; i<k;i++){
            for(long int j =0;j<n;j++){
                dp[i] = min(dp[i],dp[last[j]]*p[j]);
            }
             for(int j =0;j<n;j++){
                if(dp[i] == dp[last[j]]*p[j]) last[j]++;
            }
        }
        return dp[k-1];
    }

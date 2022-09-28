

 int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        int dp[n+1];
        dp[0] = 0;
        for(int i  =  1;i <= n ;i++){
             int best = 0;
            int obest = 0;
          for(int j = 1; j <= k && i-j >= 0;j++){
              
              best = max(best, arr[i-j]);
              
              obest = max(obest, (dp[i-j] + best*j));
              
          }
            dp[i] = obest;
        }
        return dp[n];
    }

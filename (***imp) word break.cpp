// imporatant things is here we learnt -> for(string c : wordDict)   here we can iterate string in worddict
//139 dp
bool wordBreak(string s, vector<string>& wordDict) {
          
        int n = s.size();
        vector<int> dp(n+1,false);
        dp[0] = true;
        
        for(int i = 1;i<=n;i++){
            for(string c : wordDict){
                int start = i - c.size();
                if(start >=0 && dp[start]){
                    string ss = s.substr(start,c.size());
                    if(c == ss){
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }

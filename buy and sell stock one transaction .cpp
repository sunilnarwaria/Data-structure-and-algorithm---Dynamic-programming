  int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mm = 1e9;
        int mx = 0;
        for(int i=0;i<n;i++)
        {
            if(prices[i] <mm)
            {
                mm = prices[i];
                
            }
            else if(prices[i] - mm >mx)
            {
                mx = prices[i] - mm ;
            }
        }
        return mx;
        
    }

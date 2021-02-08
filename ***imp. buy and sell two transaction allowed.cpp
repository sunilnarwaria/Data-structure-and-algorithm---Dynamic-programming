// profit buy 2 mai add krne  k liye  p - oneBuyOneSell  kr rhe hai
  int maxProfit(vector<int>& prices) {
        
  int oneBuyOneSell = 0;
  int twoBuyTwoSell = 0;
  int oneBuy = INT_MAX;
  int twoBuy = INT_MAX;
  
  for(int i = 0; i < prices.size(); i++) {
    int p = prices[i];
    oneBuy = min(oneBuy, p);
    oneBuyOneSell = max(oneBuyOneSell, p - oneBuy);
    twoBuy = min(twoBuy, p - oneBuyOneSell);
    twoBuyTwoSell = max(twoBuyTwoSell, p - twoBuy);
  }
  
  return twoBuyTwoSell;
   }

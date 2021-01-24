

 bool canCross(vector<int>& stones) {
         unordered_map<int,set<int>>mp;
        int n = stones.size();
         for(int x:stones)
            mp[x] = {};
        mp[0].insert(1);
        
        for(int i =0;i<n;i++){
            set<int>s = mp[stones[i]];
           
            for(auto k :s){
                 int x = stones[i];
                if(mp.find(x+k) != mp.end()){
                    mp[x+k].insert(k);
                    mp[x+k].insert(k-1);
                    mp[x+k].insert(k+1);
                    if(x+k == stones[n-1]){
                        return true;
                    }
                }
            }
        }
        return false;
    }

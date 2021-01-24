    //leetcode 78
    vector<vector<int>> subsets(vector<int>& nums) {
        
         int n = nums.size();
        vector<vector<int>> vec;
        
        for(int i=0;i<(1<<n);++i)
         {
            vector<int> v;
            for(int j=0;j<n;++j)
            {
                if((1<<j) & i)
                    v.push_back(nums[j]);
            }
            vec.push_back(v);
        }
        return vec;
        
    }
   // testcase 
 //   Input: nums = [1,2,3]
//Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

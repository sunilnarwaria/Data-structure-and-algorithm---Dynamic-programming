class Solution {
public:
   int lengthOfLIS(vector<int>& a) 
    {
        int i,ind,n=a.size();
        vector<int> v;
        v.push_back(a[0]);
        for(i=1;i<n;i++)
        {
            if(a[i]>v.back()) v.push_back(a[i]);
            else
            {
                ind=lower_bound(v.begin(),v.end(),a[i])-v.begin();
                v[ind]=a[i];
            }
        }
        return v.size();
    }
};

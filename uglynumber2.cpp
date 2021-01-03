class Solution {
public:
    int nthUglyNumber(int n) {
     vector<int>v;
        int i2=0,i3=0,i5=0;
        v.push_back(1);
        while(v.size() <= n){
            int n1 = 2*v[i2];
            int n2 = 3*v[i3];
            int n3 = 5*v[i5];
            int n4 = min({n1,n2,n3});
            v.push_back(n4);
            if(n1 == n4)   i2++;
            if(n2 == n4)    i3++;
            if(n3 == n4)    i5++;
          
        }
        return v[n-1];
    }
};

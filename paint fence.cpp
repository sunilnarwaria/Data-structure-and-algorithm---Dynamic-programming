

#include<bits/stdc++.h>
using namespace std;
int main(){
    
     int n,k;
     cin>>n>>k;
     int same = k;
     int diff = k*(k-1);
     for(int i=3;i<=n;i++){
         int same1 = diff;
         int diff1 = (same+diff)*(k-1);
         same = same1;
         diff = diff1;
         
     }
     int ans = same + diff;
     cout<<ans;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,i,j,k,m;
    cin>>n>>i>>j>>k>>m;
    int onmask = (1<<i);
    int offmask = ~(1<<j);
    int tmask = (1<<k);
    int cmask = (1<<m);
    
    cout<< (n | onmask)<<endl;
    cout<< (n & offmask)<<endl;
    cout<< (n ^ tmask)<<endl;
    cout<< ((n & cmask) == 0 ? 0 : 1);
}


#include<bits/stdc++.h>
using namespace std;
 int xorsum(int a[],int n){
     int ans(0);
     for(int i=0;i<n;i++){
         ans ^= (2*a[i]);
     }
     cout<<ans;
 }
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    xorsum(a,n);
}

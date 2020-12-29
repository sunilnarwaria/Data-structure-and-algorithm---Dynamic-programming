
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int eat0 =1;
    int eat1 =1;
    for(int i=2;i<=n;i++){
        int tmp = eat0;
        eat0 = eat1;
        eat1 = tmp+eat0;
    }
    int ans = eat0+eat1;
    cout<<ans;
}

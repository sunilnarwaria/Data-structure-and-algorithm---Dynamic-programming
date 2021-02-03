
int Solution::solve(int A) {
     int m = 1e9+7;
     int f[A + 1], g[A + 1]; 
    f[0] = 1, f[1] = 0, g[0] = 0, g[1] = 1; 
    for (int i = 2; i <= A; i++) { 
        f[i] = (f[i-2]%m + 2*g[i-1]%m)%m;
        g[i] = (f[i-1]%m + g[i-2]%m)%m;
       
    } 
   if(A%2 ==1) return 0;
    return f[A];
}


//fatest
int Solution::solve(int n) {
    
    if(n%2 == 1) return 0;
    long long int A[n+1]={0},B[n+1]={0};
   // vector<long long int> a(A+1, 0), c(A+1,0);
    A[0]=1, B[1]=1;
    
    for(int i=2;i<=n;i++){
        A[i]=(2*B[i-1]+A[i-2])%1000000007;
        B[i]=(A[i-1]+B[i-2])%1000000007;
    }
    return A[n];

}

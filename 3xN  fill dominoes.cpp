
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

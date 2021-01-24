
// In time complexity O(2^n)

#include<iostream>
using namespace std;
 
// Returns count of different partitions of n
// elements in k subsets
int countP(int n, int k)
{
  // Base cases
  if (n == 0 || k == 0 || k > n)
     return 0;
  if (k == 1 || k == n)
      return 1;
 
  // S(n+1, k) = k*S(n, k) + S(n, k-1)
  return  k*countP(n-1, k) + countP(n-1, k-1);
}
 
// Driver program
int main()
{
   cout <<  countP(3, 2);
   return 0;
}





// in time complexity O(n*k)


#include<iostream>
using namespace std;
 
// Returns count of different partitions of n
// elements in k subsets
int countP(int n, int k)
{
  // Table to store results of subproblems
  int dp[n+1][k+1];
 
  // Base cases
  for (int i = 0; i <= n; i++)
     dp[i][0] = 0;
  for (int i = 0; i <= k; i++)
     dp[0][k] = 0;
 
  // Fill rest of the entries in dp[][]
  // in bottom up manner
  for (int i = 1; i <= n; i++)
     for (int j = 1; j <= i; j++)
       if (j == 1 || i == j)
          dp[i][j] = 1;
       else
          dp[i][j] = j * dp[i - 1][j] + dp[i - 1][j - 1];
 
  return dp[n][k];
}
 
// Driver program
int main()
{
   cout <<  countP(5, 2);
   return 0;
}

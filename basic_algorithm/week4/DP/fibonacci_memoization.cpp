#include <bits/stdc++.h>
using namespace std;
#define mx long long int

vector<mx> dp(10005, -1);
mx fibonacci(mx n) // O(N)
{
          if (n < 2)
              return n;

          if(dp[n] != -1)    
             return dp[n];

          dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
          return dp[n];
}

int main(void)
{
          int n;
          cin >> n;
          cout << fibonacci(n) << endl;
          return 0;
}
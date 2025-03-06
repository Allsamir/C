#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cout << "Enter the value of n: ";
          cin >> n;
          int fibonacci[n + 1];
          fibonacci[0] = 0;
          fibonacci[1] = 1;
          for(int i = 2; i <= n; i++) // O(N)
          {
                    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
          }

          cout << "Fibonacci sequence up to " << n << "th term: ";

          cout << fibonacci[n] << " ";
          return 0;
}
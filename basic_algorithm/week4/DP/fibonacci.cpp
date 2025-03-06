#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) // O(2^N)
{
          if(n < 2)
                return n;
          else
                return fibonacci(n-1) + fibonacci(n-2);
}

int main(void)
{
          int n;
          cin >> n;
          cout << fibonacci(n) << endl;
          return 0;
}
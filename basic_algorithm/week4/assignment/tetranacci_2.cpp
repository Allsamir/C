#include <bits/stdc++.h>
using namespace std;

long long int tetranacci(int n)
{
          long long int tetranaccii[n + 1];
          tetranaccii[0] = 0;
          tetranaccii[1] = 1;
          tetranaccii[2] = 1;
          tetranaccii[3] = 2;

          for(int i = 4; i <= n; i++)
          {
                    tetranaccii[i] = tetranaccii[i - 1] + tetranaccii[i - 2] + tetranaccii[i - 3] + tetranaccii[i - 4];
          }

          return tetranaccii[n];
}
int main(void)
{
          int n;
          cin >> n;

          cout << tetranacci(n) << endl;
          return 0;
}
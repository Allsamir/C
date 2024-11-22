#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{         
          int *arr = new int[n];

          for(int i = 0; i < n; i++)
          {
                    cin >> arr[i];
          }

          sort(arr, arr + n, greater<int>());

          return arr; // Return the dynamically allocated array
}

int main(void)
{
          int n;
          cin >> n;

          int *p = sort_it(n);

          for(int i = 0; i < n; i++)
          {
                    cout << p[i] << " ";
          }

          delete []p;
          return 0;
}
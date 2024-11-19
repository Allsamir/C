#include <bits/stdc++.h>
using namespace std;


int *get_array(int x)
{
          int *arr = new int[x];

          for(int i = 0; i < x; i++)
          {
                    cin >> arr[i];
          }

          return arr; // Return the dynamically allocated array
}

int main(void)
{
          int x;
          cin >> x;
          int *p = get_array(x);

          for(int i = 0; i < x; i++)
          {
                    cout << p[i] << " "; // Access the dynamically allocated array elements using pointer
          }

          delete[] p;
          return 0;
}
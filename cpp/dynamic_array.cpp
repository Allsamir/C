#include <bits/stdc++.h>
using namespace std;
// int main(void)
// {
//           int *arr = new int[5];

//           for(int i = 0; i < 5; i++)
//           {
//                     cin >> arr[i];
//           }

//           for(int i = 0; i < 5; i++)
//           {
//                     cout << arr[i] << " ";
//           }

//           delete [] arr;
// }

int *fun()
{
          int *arr = new int[5];

          for (int x = 0; x < 5; x++)
          {
                    cin >> arr[x];
          }

          return arr;
}

int main(void)
{
          int *x = fun();

          for (int i = 0; i < 5; i++)
          {
                    cout << x[i] << endl;
          }

          delete[] x;
}
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

// int *fun()
// {
//           int *arr = new int[5];

//           for (int x = 0; x < 5; x++)
//           {
//                     cin >> arr[x];
//           }

//           return arr;
// }

// int main(void)
// {
//           int *x = fun();

//           for (int i = 0; i < 5; i++)
//           {
//                     cout << x[i] << endl;
//           }

//           delete[] x;
// }

int main(void)
{
          int n;
          cin >> n;

          int *arr = new int[n]; // acllocating n size of int in memory and returning the first element pointer

          // taking inputs of first array
          for(int x = 0; x < n; x++)
          {         
                    int temp;
                    cin >> temp;
                    arr[x] = temp;
          }

          // taking inputs of second array and merging it with first array with size of n and m respectively
          int m;
          cin >> m;

          // allocating memory for second array with size of m
          int *arr2 = new int[m];

          // copying elements of first array to second array with size of n
          for(int x = 0; x < n; x++)
          {
                    arr2[x] = arr[x];
          }

          // deleteing the first array
          delete[] arr;

          // calculating how many times more I have to take inputs
          int left = abs(m - n);

          // taking inputs for second array until it has size of left
          for(int x = 0; x < left; x++)
          {
                   cin >> arr2[n + x];
          }

          // printing the second array
          for(int x = 0; x < m; x++)
          {
                    cout << arr2[x] << " ";
          }

          // deleting the second array
          delete[] arr2;

          return 0;
}
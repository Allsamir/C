#include <stdio.h>

int main(void)
{
          // solution to problem 1
          // int n;
          // scanf("%d", &n);

          // int totalZeros = 0;
          // int totalOnes = 0;

          // for(int i = 0; i < n; i++)
          // {
          //           int num;
          //           scanf("%1d", &num);
          //           num == 0 ? totalZeros++ : totalOnes++;
          // }

          // printf("%d %d\n", totalZeros, totalOnes);

          // solution to problem 2

          int n;
          scanf("%d", &n);

          int arr[n];

          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          // swap the index of arr[x];
          int x;
          scanf("%d", &x);
          if (arr[x - 1] == 0)
          {
                    arr[x - 1] = 1;
          }
          else if (arr[x - 1] == 1)
          {
                    arr[x - 1] = 0;
          }

          //print the updated array
          for(int z = 0; z < n; z++)
          {         
                    printf("%d ", arr[z]);
          }

}
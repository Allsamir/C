#include <stdio.h>

void recursion(int n, int *arr);

int sum = 0;
int main(void)
{
          int n;
          scanf("%d", &n);

          int arr[n];

          for(int x = 0; x < n; x++)
          {
                    scanf("%d", &arr[x]);
          }

          recursion(n, arr);
          printf("Sum of array elements: %d", sum);
}

void recursion(int n, int *arr)
{         
          sum += arr[n - 1];
          if(n == 0) return; // base case
          recursion(n - 1, arr); //recusive call
}
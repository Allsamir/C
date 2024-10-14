#include <stdio.h>

int main() 
{
          int n;
          scanf("%d", &n);

          // array to printout
          int arr[n];

          int num;
          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &num);
                    if(num < 0) // negative
                    {
                              arr[i] = 2;
                    }
                    else if(num == 0)
                    {
                              arr[i] = 0;
                    }
                    else 
                    {
                              arr[i] = 1;
                    }
          }

          // print out the array
          for(int i = 0; i < n; i++)
          {
                    printf("%d ", arr[i]);
          }
          return 0;

}
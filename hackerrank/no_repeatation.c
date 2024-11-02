#include <stdio.h>

int main(void)
{
          int n;

          scanf("%d", &n);

          int arr[n];

          for (int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          int f_arr[1000000] = {0};

          for(int i = 0; i < n; i++)     
          {
                    f_arr[arr[i]]++;
          }     

          int count = 0;          
          for(int i = 0; i < sizeof(f_arr) / sizeof(f_arr[0]); i++)
          {
                   if(f_arr[i] < 2 && f_arr[i] > 0)
                   {
                    count++;
                   }
          }

          printf("%d\n", count);
          return 0;
}
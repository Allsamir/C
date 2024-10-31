#include <stdio.h>

int main(void)
{
          int n;

          scanf("%d", &n);

          int arr[n];

          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          for(int x = 0; x < n; x++)
          {
                    if (arr[x] >= 1 && arr[x] <= 3)
                              printf("Junior candidate\n");
                              else if (arr[x] < 1 )
                                        printf("Entry-level candidate\n");
                                        else if(arr[x] > 3 && arr[x] < 8)
                                                  printf("Mid-level candidate\n");
                                                  else if(arr[x] > 7 && arr[x] < 21) 
                                                  printf("Senior candidate\n");
          }
}
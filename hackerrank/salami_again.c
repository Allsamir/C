#include <stdio.h>

int main(void)
{
          int n_of_cusins;
          scanf("%d", &n_of_cusins);

          int arr_of_salami[n_of_cusins];

          for(int i = 0; i < n_of_cusins; i++)
          {
                    scanf("%d", &arr_of_salami[i]);
          }

          int max_salami = arr_of_salami[0];

          for(int i = 1; i < n_of_cusins; i++)
          {
                    if(arr_of_salami[i] > max_salami)
                    {
                              max_salami = arr_of_salami[i];
                    }
          }

          // Calculate how much salami each cusin need to level max_salami

          for(int z = 0; z < n_of_cusins; z++)
          {
                    int salami_needed = max_salami - arr_of_salami[z];
                    printf("%d ", salami_needed);
          }
}
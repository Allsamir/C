#include <stdio.h>

int main(void)
{
          int n;
          scanf("%d", &n);
          int space = n;
          int star = 1;
          int space2 = 0;
          int star2 = n * 2;
          for(int i = 1; i <= n; i++)
          {
                    for (int j = 1; j < space; j++)
                    {
                              printf(" ");
                    }
                    for(int x = 0; x < star; x++)
                    {
                              printf("*");
                    }
                    printf("\n");
                    space--;
                    star+=2;
          }

          for (int i = 1; i <= n; i++)
          {
                    for(int k = 0; k < space2; k++)
                    {
                              printf(" ");
                    }

                    for(int f = 1; f < star2; f++)
                    {
                              printf("*");
                    }
                    printf("\n");

                    space2++;
                    star2-=2;
          }
}

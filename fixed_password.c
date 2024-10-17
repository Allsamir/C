#include <stdio.h>

int main(void)
{
          while(1)
          {
                    int n;
                    scanf("%d", &n);

                    if(n == 1999)
                    {
                              printf("Correct\n");
                              return 0;
                    }
                    else 
                    {
                              printf("Wrong\n");
                    }
          }

          // int n;
          // do{
          //           scanf("%d", &n);
          //           if(n == 1999)
          //           {
          //                 printf("Correct\n");
          //           }
          //           else
          //           {
          //                     printf("Wrong\n");
          //           }
          // } while(n != 1999);
}
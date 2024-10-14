#include <stdio.h>

int main ()
{
          int n;
          scanf("%d", &n); // number of elements to take input

          // intialization of sum
          long long sum = 0;
          int num;
          // to calculate sum

          for(int x = 0; x < n; x++)
          {
                    scanf("%d", &num);
                    sum += num; 
          }

          // to make negative value to positive value

          if(sum < 0)
          {
                    sum*= -1;
          }

          printf("%lld\n", sum);
}
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int countVowel(char *string, int count, int str);

int main()
{
          // Write C code here

          char string[201];

          scanf("%[^\n]s", string);

          int count = 0;

          printf("%d\n", countVowel(string, count, 0));

          return 0;
}

int countVowel(char *string, int count, int str)
{
          // base
          if (string[str] == '\0')
                    return count;

          if (string[str] == 'a' || string[str] == 'A')
          {
                    count++;
          }
          else if (string[str] == 'e' || string[str] == 'E')
          {
                    count++;
          }
          else if (string[str] == 'i' || string[str] == 'I')
          {
                    count++;
          }
          else if (string[str] == 'o' || string[str] == 'O')
          {
                    count++;
          }
          else if (string[str] == 'u' || string[str] == 'U')
          {
                    count++;
          }

          // recursive call
          countVowel(string, count, str + 1);
}
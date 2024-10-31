#include <stdio.h>
#include <string.h>

int main()
{
          int N; // Number of test cases
          scanf("%d", &N);

          for (int i = 0; i < N; i++)
          {
                    char S[51], T[51]; // Strings S and T, max length of 50
                    scanf("%s %s", S, T);

                    int lenS = strlen(S);
                    int lenT = strlen(T);
                    int maxLength = (lenS > lenT) ? lenS : lenT; // Find the maximum length

                    // Interleave the characters
                    for (int j = 0; j < maxLength; j++)
                    {
                              if (j < lenS)
                              {
                                        printf("%c", S[j]);
                              }
                              if (j < lenT)
                              {
                                        printf("%c", T[j]);
                              }
                    }
                    printf("\n"); // Move to the next line for the next test case
          }

          return 0;
}

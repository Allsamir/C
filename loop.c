#include <stdio.h>

int main(void)
{
          int n;

          // Input the size of the square matrix
          scanf("%d", &n);

          int matrix[n][n];

          // Input the elements of the matrix
          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < n; j++)
                    {
                              scanf("%d", &matrix[i][j]);
                    }
          }

          // Display primary diagonal elements
          printf("\nMajor diagonal: ");
          for (int i = 0; i < n; i++)
          {
                    printf("%d ", matrix[i][i]);
          }
          printf("\n");

          // Display secondary diagonal elements
          printf("\nMinor diagonal: ");
          for (int i = 0; i < n; i++)
          {
                    printf("%d ", matrix[i][n - 1 - i]);
          }
          printf("\n");

          return 0;
}

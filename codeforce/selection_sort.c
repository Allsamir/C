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

          // Selection sort algorithm:
          for (int y = 0; y < n; y++)
          {
                    // stores the smallestNumber and it's index
                    int smallest = arr[y];
                    int smallestIndex = y;

                    // finding the smallestNumber and it's index
                    for (int z = y; z < n; z++)
                    {
                              if (arr[z] < smallest)
                              {
                                        smallest = arr[z];
                                        smallestIndex = z;
                              }
                    }

                    // swaping the smallest element and the current element
                    arr[smallestIndex] = arr[y]; // putting the current element to the smallestIndex of the array
                    arr[y] = smallest;           // putting the smallest number to the nth of the array
          }

          for (int x = 0; x < n; x++)
          {
                    printf("%d ", arr[x]);
          }
          printf("\n");
}

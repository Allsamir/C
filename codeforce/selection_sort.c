#include <stdio.h>

int main(void)
{         
          int n; 
          scanf("%d\n", &n);
          int arr[n];
          for (int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }
          
          // selection sort algorithm starts from here to sort the orginal array;
          for (int z = 0; z < n; z++)
          {
                    // selection sort algorithm:
                    // find the smallest number
                    // line:28 put the smallest number to the nth position of the array
                    // line:24 as we are taking the smallest number to the nth(z) position of the array, the current nth position z (number) will be placed into smallest number's nth position.
                    int smallest = arr[z];
                    for (int x = z; x < n; x++)
                    {
                              if (arr[x] < smallest)
                              {
                                        smallest = arr[x];
                                        arr[x] = arr[z]; // swaping the smallest number's position with current position.
                              }
                    }

                    arr[z] = smallest; // putting the smallest number that is stored earlier, in the nth position of array.
          }

          printf("Sorted Array is: ");
          for (int y = 0; y < n; y++)
          {
                    printf("%d ", arr[y]);
          }      
}
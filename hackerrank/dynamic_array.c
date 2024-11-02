#include <stdio.h>
#include <stdlib.h>
int main(void)
{
          int *arr = (int *)malloc(1 * sizeof(int)); // allocating memory for an array

          int n;
          scanf("%d", &n);

          int *temp = arr; // storing the address of the 0th index of array, by chance if the array returns NULL we may loose the memory location and that's why we are saving it temorary.

          arr = (int *)realloc(arr, n * sizeof(int)); // relocating memory for user's given input;

          if (arr == NULL) // if it returns NULL then assign the temp(memory address of 0th index of arr)
          {
                    arr = temp;
          }

          // taking inputs from user and storing them in the array
          for (int i = 0; i < n; i++)
          {
                    int temp;
                    scanf("%d", &temp);
                    arr[i] = temp;
          }

          for (int i = 0; i < n; i++)
          {
                    printf("%d ", arr[i]);
          }

          free(arr);
}
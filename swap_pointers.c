#include <stdio.h>

void swap(int *p, int *q);
int main(void)
{
          int a = 1, b = 2;
          swap(&a, &b);
          printf("a = %d, b = %d\n", a, b);
}

void swap(int *p, int *q)
{
          int temp = *p;
          *p = *q;
          *q = temp;
}
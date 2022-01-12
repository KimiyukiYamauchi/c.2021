#include <stdio.h>

int main(void)
{
  int i,j,k;
  int x[10] = {2, 1, 7, 3, 11, 5, 8, 6, 4, 9};

  for (int l = 0; l < 10; l++)
    printf(" %2d", x[l]);
  putchar('\n');

  for (i=0; i<10; i++) {
    for (k=i, j=i+1; j<10; j++) {
      if (x[k] > x[j])
        k = j;
    }
    if (k != i)
      x[i] ^= x[k], x[k] ^= x[i], x[i] ^= x[k];
      
    printf("i=%d ", i);
    for (int l = 0; l < 10; l++)
      printf(" %2d", x[l]);
    putchar('\n');
  }
  for (i = 0; i < 10; i++)
    printf(" %2d", x[i]);
  putchar('\n');
  return 0;
}
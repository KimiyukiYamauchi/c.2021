#include <stdio.h>

int main(void) {
  int itbl[5] = {10, 20, 30, 40, 50},  i;
  int *p_itbl = itbl;
  for (i=0; i<5; i++) {
    printf("itbl[%d] =%3d ", i, *(p_itbl+i));
  }
  putchar('\n');

  i=0;
  while (i<5) {
    printf("itbl[%d] =%3d ", i, *p_itbl);
    i++;
    p_itbl++;
  }
  putchar('\n');
  return 0;
}
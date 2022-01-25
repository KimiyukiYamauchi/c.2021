#include <stdio.h>

#define TABLETOP 0
#define TABLEEND 10

int main(void)
{
  int table[TABLEEND] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, i;

  for (i = TABLETOP; i < TABLEEND; i++)
    printf("%4d", table[i]);
  putchar('\n');
  return 0;
}
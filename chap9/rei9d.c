#include <stdio.h>

void shisoku(int x, int y, int *wa, int *sa, int *seki, int *syou);

int main(void)
{
  int a, b, c, d, e, f;

  printf("Value1? : ");
  scanf("%d", &a);
  printf("Value2? : ");
  scanf("%d", &b);
  shisoku(a, b, &c, &d, &e, &f);
  puts("Four arithmetic operations of Value1 and Value2");
  printf("add = %d sub = %d mul = %d div = %d\n", c, d, e, f);
  return 0;
}
void shisoku(int x, int y, int *wa, int *sa, int *seki, int *syou)
{
  *wa = x + y;
  *sa = x - y;
  *seki = x * y;
  *syou = x / y;
  return;
}
#include <stdio.h>

int main(void)
{
  int a = 100, b = 200, wk;
  int *p_a, *p_b;

  p_a = &a;
  p_b = &b;
  wk = *p_b;
  *p_b = *p_a;
  *p_a = wk;
  printf("*p_a = %d *p_b = %d\n", *p_a, *p_b);
  printf("p_a = %p p_b = %p\n", p_a, p_b);
  printf("a = %d b = %d\n", a, b);
  return 0;
}
#include <stdio.h>

int main(void)
{
  int itbl[5] = {10, 20, 30, 40, 50};
  int *p_itbl;
  long ltbl[5] = {1000L, 2000L, 3000L, 4000L, 5000L};
  long *p_ltbl;

  p_itbl = itbl;
  printf("*p_itbl = %d\n", *p_itbl);
  printf("p_itbl = %p\n", p_itbl);
  p_itbl++;
  printf("*p_itbl = %d\n", *p_itbl);
  printf("p_itbl = %p\n", p_itbl);
  p_itbl++;
  printf("*p_itbl = %d\n", *p_itbl);
  printf("p_itbl = %p\n", p_itbl);

  p_ltbl = ltbl;
  printf("*p_ltlb = %ld\n", *p_ltbl);
  printf("p_ltbl = %p\n", p_ltbl);
  p_ltbl++;
  printf("*p_ltlb = %ld\n", *p_ltbl);
  printf("p_ltbl = %p\n", p_ltbl);
  p_ltbl++;
  printf("*p_ltlb = %ld\n", *p_ltbl);
  printf("p_ltbl = %p\n", p_ltbl);

}
#include <stdio.h>
#include "macro.h"

int main(void)
{
  int a;

  printf("a ? : ");
  scanf("%d", &a);

  printf("a squared %d\n", bekijyou(a));
  return 0;
}
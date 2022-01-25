#include <stdio.h>

void gokei(int n);

int main(int n)
{
  int i;

  for (i = 1; i <= 10; i++)
    gokei(i);
  return 0;
}

void gokei(int n)
{
  static int sum = 0;
  sum += n;
  printf("sum=%d\n", sum);
  return;
}
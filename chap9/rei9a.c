#include <stdio.h>

int add(int a, int b);

int main(void)
{
  int a, b, kotae;

  printf("DATA1?:");
  scanf("%d", &a);
  printf("DATA2?:");
  scanf("%d", &b);
  kotae = add(a, b);
  printf("%d + %d = %d\n", a, b, kotae);
  return 0;
}

int add(int a, int b)
{
  int ans;
  ans = a + b;
  return ans;
}
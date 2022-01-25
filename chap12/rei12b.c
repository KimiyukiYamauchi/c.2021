#include <stdio.h>

#define DATANG 0
#define divide(a, b) (a / b)
#define error_message() puts("error! zero divide not permit")

int main(void)
{
  int a, b;

  printf("a / b calculation\n");
  printf("a ?:");
  scanf("%d", &a);
  printf("b ?:");
  scanf("%d", &b);
  if (b == DATANG)
    error_message();
  else
    printf("a / b = %d\n", divide(a, b));
  return 0;
}
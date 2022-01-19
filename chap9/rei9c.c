#include <stdio.h>

void display(int *n);

int main(void)
{
  int a;

  printf("Numeric?:");
  scanf("%d", &a);
  display(&a);
  printf("a = %d\n", a);
  return 0;
}

void display(int *n)
{
  printf("Numeric value is %d.\n", *n);
  *n += 10;
  printf("Add 10 is %d.\n", *n);
  return;
}
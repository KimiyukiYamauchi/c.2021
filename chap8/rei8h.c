#include <stdio.h>

int main(void)
{
  char data[10] = "America";
  char *p_data;
  char *p = "Japan";

  p_data = data;
  while (*p_data != '\0')
  {
    putchar(*p_data++);
    putchar('\n');
  }
  while (*p != '\0')
  {
    putchar(*p++);
    putchar('\n');
  }
  return 0;
}
#include <stdio.h>

int main(void)
{
  int i;
  char *country_p[3] = {
      "Japan",
      "America",
      "France",
  };

  char **p;
  p = country_p;
  for (i = 0; i < 3; i++)
    printf("%s\n", *p++);

  return 0;
}
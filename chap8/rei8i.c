#include <stdio.h>

int main(void)
{
  int i;
  char *country_p[3] = {
      "Japan",
      "America",
      "France",
  };
  for (i = 0; i < 3; i++)
    printf("%s\n", country_p[i]);

  return 0;
}
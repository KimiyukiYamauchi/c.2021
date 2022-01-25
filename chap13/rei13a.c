#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char buf[256];

  if ((fp = fopen("test.txt", "r")) == NULL)
  {
    puts("test.txt can't open");
    return 1;
  }
  while (fgets(buf, 256, fp) != NULL)
    printf("%s", buf);
  fclose(fp);
  return 0;
}
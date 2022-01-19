#include <stdio.h>

int strcnt(char *p);

int main(void)
{
  char buf[256];
  int mojisu;

  printf("String?: ");
  gets(buf);
  mojisu = strcnt(buf);
  printf("Input string length is %d\n", mojisu);
  return 0;
}
int strcnt(char *p)
{
  int cnt;
  for (cnt = 0; *p != '\0'; cnt++, p++)
    ;
  return cnt;
}
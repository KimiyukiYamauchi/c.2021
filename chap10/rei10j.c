#include <stdio.h>
int main(void)
{
  union suuchi
  {
    char c_dat[4];
    long l_dat;
  } suuchi_dat;
  int i;

  suuchi_dat.l_dat = 0x41424344;

  for (i = 0; i < 4; i++)
    printf("%c ", suuchi_dat.c_dat[i]);
  return 0;
}
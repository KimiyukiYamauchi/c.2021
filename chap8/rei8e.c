#include <stdio.h>

int main(void)
{
  int tbl[3][3] = {
      {10, 20, 30},
      {40, 50, 60},
      {70, 80, 90},
  };
  int *p_tbl, i;

  p_tbl = (int *)tbl;
  // p_tbl = tbl;
  puts("二次元配列tblの内容");
  for (int i = 0; i < (3 * 3); i++)
  {
    printf("%d\n", *p_tbl++);
  }
  return 0;
}
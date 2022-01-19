#include <stdio.h>
struct syouhin_data
{
  char name[20];
  int tanka;
  int kosuu;
};
int main(void)
{
  struct syouhin_data syouhin[] = {
      {"pencil", 30, 5},
      {"eraser", 50, 2},
      {"pencil case", 500, 3},
      {"", -1, 0}};
  struct syouhin_data *p;
  {
      /* data */
  };

  p = syouhin;
  while (p->tanka != -1)
  {
    printf("name : = %s\n", p->name);
    printf("tanka: = %4d\n", p->tanka);
    printf("kosuu: = %4d\n", p->kosuu);
    p++;
  }
  return 0;
}

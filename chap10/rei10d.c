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
      {"pencil case", 500, 3}};
  int i;

  for (i = 0; i < 3; i++)
  {
    printf("name : = %s\n", syouhin[i].name);
    printf("tanka: = %4d\n", syouhin[i].tanka);
    printf("kosuu: = %4d\n", syouhin[i].kosuu);
  }
  return 0;
}

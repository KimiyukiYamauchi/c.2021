#include <stdio.h>
#include <string.h>
struct syouhin_data
{
  char name[20];
  int tanka;
};
int main(void)
{
  struct syouhin_data syouhin;
  struct syouhin_data *p;
  p = &syouhin;
  strcpy(p->name, "pencil");
  p->tanka = 30;

  printf("p->name = %s\n", p->name);
  printf("p->tanka = %d\n", p->tanka);
  printf("syouhin.name = %s\n", syouhin.name);
  printf("syouhin.tanka = %d\n", syouhin.tanka);
  return 0;
}

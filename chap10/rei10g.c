#include <stdio.h>
struct syouhin_data
{
  char name[20];
  int tanka;
};

void display3(struct syouhin_data *p);

int main(void)
{
  int a = 10;

  struct syouhin_data syouhin = {"消しゴム", 50};
  display3(&syouhin);
  return 0;
}

void display3(struct syouhin_data *p)
{
  printf("%s %d\n", p->name, p->tanka);
  return;
}
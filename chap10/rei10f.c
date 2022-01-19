#include <stdio.h>
struct syouhin_data
{
  char name[20];
  int tanka;
};

void display1(int a);
void display2(struct syouhin_data syouhin);

int main(void)
{
  int a = 10;

  struct syouhin_data syouhin = {"消しゴム", 50};
  display1(a);
  display2(syouhin);
  return 0;
}

void display1(int a)
{
  printf("%d\n", a);
  return;
}

void display2(struct syouhin_data syouhin)
{
  printf("%s %d\n", syouhin.name, syouhin.tanka);
}
#include <stdio.h>

struct ken
{
  int code;
  char *name;
  struct ken *next;
};

int main(void)
{
  static struct ken ken_data[] = {{1, "Hokkaidou", NULL},
                                  {2, "Aomori", NULL},
                                  {3, "Iwate", NULL},
                                  {4, "Miyagi", NULL},
                                  {5, "Akita", NULL},
                                  {6, "Yamagata", NULL},
                                  {7, "Fukushima", NULL},
                                  {-1, NULL, NULL}};
  struct ken *p, *wp;

  for (p = ken_data; p->code != -1; p++)
  {
    if (p != ken_data)
      wp->next = p;
    wp = p;
  }

  for (p = ken_data; p != NULL; p = p->next)
    printf("code = %d name = %s\n", p->code, p->name);

  return 0;
}
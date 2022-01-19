#include <stdio.h>
#include <string.h>
struct tel_no_type
{
  char jitaku[14];
  char keitai[14];
  char phs[14];
};

struct person_type
{
  char name[30];
  struct tel_no_type tel_no;
  char address[60];
};

int main(void)
{
  struct person_type person;
  struct person_type *p = &person;

  strcpy(person.name, "Ichiro Suzuki");
  strcpy(person.tel_no.jitaku, "093-791-xxxx");
  strcpy(person.tel_no.keitai, "090-9409-xxxx");
  strcpy(person.tel_no.phs, "070-6173-xxxx");
  strcpy(person.address, "Tokyoto Chuouku xxx");

  printf("name: %s\n", p->name);
  printf("jitaku: %s\n", p->tel_no.jitaku);
  printf("keiati: %s\n", p->tel_no.keitai);
  printf("PHS: %s\n", p->tel_no.phs);
  printf("address: %s\n", p->address);
  return 0;
}
#include <stdio.h>

struct world
{
  char name[10];
  int code;
};

int main(void)
{
  FILE *fp;
  struct world data[2] = {
      {"America", 840},
      {"Japan", 392}};
  struct world buf[2];
  int i;

  fp = fopen("testfile.txt", "w");
  fwrite(data, sizeof(struct world), 2, fp);
  fclose(fp);

  fp = fopen("testfile.txt", "r");
  fread(buf, sizeof(struct world), 2, fp);
  fclose(fp);

  for (i = 0; i < 2; i++)
    printf("%02d:%s %d\n", i, buf[i].name, buf[i].code);
  return 0;
}
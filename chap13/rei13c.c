#include <stdio.h>
#define BLKSIZE 11

int main(void)
{
  FILE *fp;
  char data[2][12] = {
      "Japan  :392",
      "America:840"};
  char buf[256];

  fp = fopen("testfile.txt", "w");
  fwrite(&data[0], BLKSIZE, 1, fp);
  fwrite(&data[1], BLKSIZE, 1, fp);
  fclose(fp);

  fp = fopen("testfile.txt", "r");
  fread(buf, BLKSIZE, 2, fp);
  buf[BLKSIZE * 2] = '\0';
  printf("%s\n", buf);
  fclose(fp);
  return 0;
}
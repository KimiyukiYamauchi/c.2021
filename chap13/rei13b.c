#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp_in, *fp_out;
  char buf[256], copy_fname[20];
  puts("test.txtを指定されたファイルにコピーします");
  printf("コピー先のファイル名:");
  gets(copy_fname);
  if ((fp_in = fopen("test.txt", "r")) == NULL)
  {
    puts("test.txtがオープンできません");
  }
  if ((fp_out = fopen(copy_fname, "w")) == NULL)
  {
    printf("%sのファイルがオープンできません\n", copy_fname);
    fclose(fp_in);
    return 1;
  }
  while (fgets(buf, 256, fp_in) != NULL)
    fputs(buf, fp_out);
  fclose(fp_in);
  fclose(fp_out);
  puts("コピー先のファイルの内容出力");
  if ((fp_in = fopen(copy_fname, "r")) == NULL)
  {
    printf("%sのファイルがオープンできません\n", copy_fname);
    return 1;
  }
  while (fgets(buf, 256, fp_in) != NULL)
    printf("%s", buf);
  fclose(fp_in);
  return 0;
}
#include <stdio.h>

int main(void)
{
  char buf[256], *p_buf;
  int cnt;

  printf("文字列？");
  fgets(buf, 256, stdin);
  // gets(buf);

  for (cnt = 0, p_buf = buf; *p_buf != '\0'; cnt++, p_buf++)
    ;
  printf("入力文字数 = %d\n", cnt);
}
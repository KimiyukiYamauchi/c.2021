#include <stdio.h>

int main(void) {
  char buf[256], *p_buf;
  int cnt;

  printf("������H");
  // fgets(buf, 256, stdin);
  gets(buf);

  for (cnt = 0, p_buf = buf; *p_buf != '\0'; cnt++, p_buf++)
    ;
  printf("���͕����� = %d\n", cnt);  
}
#include <stdio.h>

int main(void)
{
  char data1[120] = "C Language t";
  // char data2[20] = "aaaaaaaaaaaaaaaaaaa";
  char data2[20];
  for (int i = 0; i < 20; i++)
    printf("%d ", data2[i]);
  putchar('\n');
  char *p_data1, *p_data2;
  p_data1 = data1;
  p_data2 = data2;
  while (*p_data1 != '\0')
    *p_data2++ = *p_data1++;
  *p_data2 = '\0';
  p_data2 = data2; /* set data2 array top address */
  while (*p_data2 != '\0')
    putchar(*p_data2++);
  putchar('\n');

  for (int i = 0; i < 20; i++)
    printf("%d ", data2[i]);
  putchar('\n');

  return 0;
}
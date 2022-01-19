#include <stdio.h>

int main(void)
{
  char str1[16] = "", str2[6];
  int insno = 0, strlen1 = 0, strlen2 = 0, i;

  printf("文字列1に文字列2を挿入するプログラム。\n");
  printf("文字列1を半角10文字以内で入力:");
  scanf("%s%*c", str1);

  printf("文字列2を半角5文字以内で入力");
  scanf("%s%*c", str2);

  while (str1[strlen1] != '\0')
    strlen1++;
  while (str2[strlen2] != '\0')
    strlen2++;
  printf("文字列1は%d文字、文字列2は%d文字。\n", strlen1, strlen2);

  printf("文字列2の挿入位置を1～%dの値で入力：", strlen1);
  scanf("%d", &insno);
  printf("「%s」の%d番目に「%s」を挿入。\n", str1, insno, str2);

  for (i = strlen1 - 1; i >= insno - 1; i--)
    str1[i + strlen2] = str1[i];
  printf("途中結果：| %s | \n", str1);

  for (i = 0; i < strlen2; i++)
    str1[insno - 1 + i] = str2[i];
  printf("挿入結果：| %s | \n", str1);
  return 0;
}
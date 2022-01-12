#include <stdio.h>

int main()
{
    int x;
    int ch;
    do {
        printf("正整数を入力 →");
        scanf("%d",&x);
        printf("x=%d x*x=%d\n",x,x*x);
        // fflush(stdin); /*入力バッファのクリア*/
        getchar();
        printf("別の数でやり直しますか (Y/N) → ");
        ch=getchar();
    } while (ch=='Y'||ch=='y');
    return 0;
}
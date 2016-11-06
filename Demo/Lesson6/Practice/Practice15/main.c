#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char ch_ar[40];

    for(i = 0; i < 5; i++)
    {
        scanf("%c",&ch_ar[i]);
    }

    for(i = 5-1; i >= 0; i--)
    {
        printf("%c",ch_ar[i]);
    }
    printf("%d",strlen(ch_ar));     //在按下Enter键的时候scanf会生成一个换号字符（\n）

    return 0;

}

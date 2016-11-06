//Practice2.c--每行打印八个字符及其ASCII码
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    char count = 0;
    printf("Please enter the character: \n");
    while((ch = getchar()) != STOP)
    {
       if(ch == '\n')
            continue;
       count++;
       printf("%c %d ",ch,ch);
       if(count%8 == 0)
            printf("\n");
    }
    return 0;
}

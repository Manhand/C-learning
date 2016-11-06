/*praisel.c--使用不同类型的字符串*/
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello,%s.%s\n",name,PRAISE);

    return 0;
}
/*
字符串常量和字符常量区别：
1.‘x’是基本类型，”x“是派生类型
2.”x“ = 'x' +　‘＼０’
*/

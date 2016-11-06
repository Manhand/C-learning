//menuette.c--菜单程序
#include <stdio.h>
#include <ctype.h>

char get_first(void);            //读取首字符

int main(void)
{
    printf("%d",get_first());

    return 0;
}
char get_first(void)
{
    int ch;
    ch = getchar();
    if(!isspace(ch))
       return;
    while(getchar() != '\n')
        continue;          //跳过输入行剩余部分

    return ch;
}





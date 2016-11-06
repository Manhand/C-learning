#include <stdio.h>
#define SPACE ' '              //空格
int main(void)
{
    char ch;

    ch = getchar();            //读取一个字符
    while(ch != '\n')          //当一行未结束时
    {
        if(ch == SPACE)        //留下空格
            putchar(ch);       //该字符不变
        else
            putchar(ch + 1);   //改变其他字符
        ch = getchar();        //获取下一个字符
    }
    putchar(ch);               //打印换行符

    return 0;
}

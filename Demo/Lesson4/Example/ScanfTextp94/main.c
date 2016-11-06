#include <stdio.h>
int main(void)
{
    int i = 0;
    char j = 0;
    if(!scanf("%d",&i))
        printf("error\n");//测试是否读入数据
    printf("i = %d\n",i);
    scanf("%c",&j);
    printf("j = %c\n",j);

    return 0;
}
/*
如果第一个非空白字符是A而不是数字，scanf（）会停在那里，并且把A放回去输入处
不会赋值给变量，程序在下一次输入时，首先读取的是A，如果程序只用%d，scanf()
就一直停在那里无法越过A读取下一个字符。如果使用多个转换说明的scanf(),C规定在
在出错处停止读取输入
*/

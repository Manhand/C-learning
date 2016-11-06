/*global.c--使用外部变量*/
#include <stdio.h>
#include <stdlib.h>
int units = 0;              //具有文件作用域、外部链接、静态存储期
void critic(void);

int main(void)
{
    extern int units;       //可选的重复声明-->告诉编译器该函数任何使用
                            //units的地方都引用同一个定义在函数外部的变量

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while(units != 56)
        critic();
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void)
{
    /*删除了可选的重复声明*/
    printf("No luck,my friend.Try again.\n");
    scanf("%d",&units);
}

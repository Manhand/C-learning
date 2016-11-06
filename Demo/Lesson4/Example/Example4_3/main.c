/*praise2.c*/
/*如果编译器不识别%zd,尝试换成%u或%lu;
( 对于早期的C，sizeof和strlen()返回的实际类型
 通常是unsigned int或 unsigned long
)
*/
#include <stdio.h>
#include <string.h>
#define PRAISE "Yor are an extraordinary being."
//strlen()——给出字符串中的字符长度
//sizeof运算符——以字节为单位给出对象的大小
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s",name);
    printf("Hello,%s.%s\n",name,PRAISE);
    printf("Your name of %u letters occupies %u memory cells.\n"
           ,strlen(name),sizeof(name));//11——不包括‘\0’ 40——整个数组长度
    printf("The phrase of praise has %u letters ",strlen(PRAISE));//31——常量的字符个数
    printf("and occupies %u memory cells.\n",sizeof(PRAISE));//32——常量的字符个数+‘\0’

    return 0;
}
/*
对于数组,strlen()给出数组内字符个数，不包括‘\0’,而
         sizeof运算符给出的是数组长度
对于明示常量，strlen()同上
         sizeof运算符给出了常量的字符个数+'\0';
*/


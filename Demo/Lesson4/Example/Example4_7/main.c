/*width.c--字段宽度*/
#include <stdio.h>
#define PAGES 959
#define PAGES1 "Hello World!"
int main(void)
{

    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);  //字段宽度自动扩大以符合整数的长度
    printf("*%10d*\n",PAGES);  //10字段宽度
    printf("*%-10d*\n",PAGES); //待打印值左对齐
    printf("*%.11s*\n",PAGES1);//待打印字符的最大数量
    printf("%5.4d\n",PAGES);    //表示待打印数字的最小位数,如有必要，使用前导0来达到这个位数

    return 0;
}

/*intconv--一些不匹配的类型转换*/
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n",num,num);
    printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
    printf("num as int and char: %d %c\n",num,num);
    printf("WORDS as int,short,and char: %d %hd %c\n",WORDS,WORDS,WORDS);
    return 0;
}
/*
0~32767代表他们本身
32768~65535则表示负数
*/

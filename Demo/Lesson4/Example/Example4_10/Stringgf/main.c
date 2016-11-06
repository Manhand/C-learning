/*Stringf.c--字符串格式*/
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n",BLURB);      //字段宽度扩大为可容纳字符串的所有字符
    printf("[%24s]\n",BLURB);     //字段宽度位24，不足字符左边补0
    printf("[%24.5s]\n",BLURB);   //精度限制了待打印字符的个数
    printf("[%-24.5s]\n",BLURB);  //-标记使得文本左对齐输出

    return 0;
}

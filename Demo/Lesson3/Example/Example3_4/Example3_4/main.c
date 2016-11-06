#include <stdio.h>
/*print2.c--更多printf()的特性*/
int main(void)
{
    unsigned int un = 3000000000;//int为32位和short位16位的系统
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n",un,un);//无符号十进制整数 有符号十进制整数
    printf("end = %hd and %d\n",end,end);//有符号short类型输出 有符号int类型输出 end会自动转换为int类型
    printf("big = %ld and not %hd\n",big,big);//使用h可以显示较大数字被截断的情况；
    printf("verybig = %lld and not %ld\n",verybig,verybig);
    return 0;
}

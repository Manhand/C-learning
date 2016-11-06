#include <stdio.h>
int main(void)
{
    int houseprice,houseprice1;

    houseprice = 249,500;            //= houseprice = 249; 500;(无意义)
    houseprice1 = (249,500);         //整个逗号表达式的值是右侧项的值
    printf("%d %d",houseprice,houseprice1);

    return 0;
}

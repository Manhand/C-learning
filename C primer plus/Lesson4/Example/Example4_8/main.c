/*float.c--一些浮点型修饰符的组合*/
#include <stdio.h>
int main(void)
{
    const double RENT =  3852.99;

    printf("*%f%\n", RENT);    //以浮点数默认形式输出
    printf("*%e%\n", RENT);    //e计数法输出
    printf("*%4.2f%\n",RENT);  //字段宽度4，自动扩大以符合浮点数长度 精度2（四舍五入）
    printf("*%3.1f%\n",RENT);  //字段宽度3，自动扩大以符合浮点数长度 精度1（四舍五入）
    printf("*%10.3f%\n",RENT); //字段宽度10 精度3
    printf("*%11.3E%\n",RENT); //e计数法输出，字段宽度11，精度3
    printf("*%+4.2f%\n",RENT); //在数字前显示+
    printf("*%010.2f%\n",RENT);//前导0填充字段宽度
    printf("*%010.4g%\n",RENT);//表示有效数字的最大位数

    return 0;
}

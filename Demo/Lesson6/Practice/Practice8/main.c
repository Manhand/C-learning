/*打印两浮点数之差除以两数乘积的结果*/
#include <stdio.h>
int main(void)
{
    float n1,n2;            //定义两个浮点数

    printf("Please enter two float value:");
    while(scanf("%f %f",&n1,&n2))
    {
        printf("%f\n",(n1-n2)/(n1*n2));
    }

    printf("error!");

    return 0;
}

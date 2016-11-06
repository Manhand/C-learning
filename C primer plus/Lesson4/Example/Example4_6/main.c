/*printout.c程序*/
#include <stdio.h>
#define PI -3.141593
int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n",number,pies);
    printf("The value of PI is %f.\n",PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("The value of PI is %f.\n",3.1415926);
    printf("%a\n",10346.0);
    printf("%c%d\n",'$',2*cost);
    printf("%g\n",3851222.0);//%g-%e格式用于指数小于-4或者大于等于精度时
    printf("%g\n",3e-5);
    printf("45%%");//%%打印一个百分号

    return 0;
}

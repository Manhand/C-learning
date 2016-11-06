//when.c-何时退出循环
#include <stdio.h>
int main(void)
{
    int n = 5;

    while(n < 7)                       //第七行
    {
        printf("n = %d\n",n);
        n++;                           //第十行
        printf("Now n = %d\n", n);     //第十一行
    }
    printf("The loop has finished.\n");

    return 0;
}

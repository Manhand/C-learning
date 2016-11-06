#include <stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be wrriten %e\n",aboat,aboat);
    //下一行要求编译器支持C99或者其中的相关特性
    printf("And it's %a in hexadecimal,powers of 2 notation\n",aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("%lf can be wrriten %Le\n",dip,dip);

    return 0;
}

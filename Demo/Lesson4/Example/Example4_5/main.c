//defines.c--使用limit.h和头文件中定义的明示常量
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    //int const MONTHS = 12;//MONTHS在程序中不可以被更改，只可以读
    //MONTHS = MONTHS*10;

    printf("Some number limits for this system:\n");
    printf("Biggest int:%d\n",INT_MAX);
    printf("Smallest long long:%lld\n",LLONG_MIN);
    printf("One byte = %d bits on this System.\n",CHAR_BIT);
    printf("Largest double: %e\n",DBL_MAX);
    printf("Smallest normal float: %e\n",FLT_MIN);
    printf("float precision = %d digits\n",FLT_DIG);
    printf("float epsilon = %e\n",FLT_EPSILON);

}

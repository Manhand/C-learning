//defines.c--ʹ��limit.h��ͷ�ļ��ж������ʾ����
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    //int const MONTHS = 12;//MONTHS�ڳ����в����Ա����ģ�ֻ���Զ�
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

/*isuse.c--�����ʹ�ú���*/
#include <stdio.h>
int imax();    //��ʽ�ĺ�������

int main(void)
{
    printf("The maximum of %d and %d is %d.\n",3,5,imax(3));
    printf("The maximun of %d and %d is %d.\n",3,5,imax(3.0,5.0));

    return 0;
}

int imax(n,m)
int n,m;
{
    return (n > m) ? n : m;
}

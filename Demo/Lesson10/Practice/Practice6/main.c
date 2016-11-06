#include <stdio.h>
#define LEN 8
void show(double *arr,int n);
void sort(double *arr,int n);
int main(void)
{
    double array[LEN] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
    printf("The previous numbers:\n");
    show(array,LEN);
    sort(array,LEN);
    printf("Now the numbers:\n");
    show(array,LEN);

    return 0;
}

void show(double *p,int len)
{
    int i;
    for(i = 0; i < len; i++)
        printf("%lf ",p[i]);
    putchar('\n');
}

void sort(double *arr,int len)
{
    int i;
    int j;
    double temp;
    //double *temp;

    /*
    for(i = 1; i <= len; i++)
        printf("%lf ",arr[len- i]);
    putchar('\n');
    */

    for(i = len-1,j=0; i >= len/2; i--,j++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        /*
        temp = (arr+i);
        (arr+i) = (arr+j);   //注意:arr+i是常数，不可以作为左操作符
        (arr+j) = temp;
        */
    }
}

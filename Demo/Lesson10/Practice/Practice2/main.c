#include <stdio.h>
void copy_arr(double [5],double [5],int);
void copy_ptr(double *,double *,int);
void copy_ptrs(double *,double *,double *);
int main(void)
{
    int i;
    double target1[5];
    double target2[5];
    double target3[5];
    double source[5] = {1.1,2.2,3.3,4.4,5.5};
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);

    copy_ptrs(target3,source,source+5);
    for(i = 0; i < 5; i++)
        printf("%lf\n",target1[i]);
        //printf("%lf\n",target2[i]);
        //printf("%lf\n",target3[i]);


    return 0;
}

void copy_arr(double target[5],double source[5],int n)
{
    int i;

    for(i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double *p1,double *p2,int n)
{
    int i;

    for(i = 0; i < n; i++)
        *(p1+i) = *(p2+i);
}

void copy_ptrs(double *p1,double *start,double *stop)
{
    double *p;

    for(p = start; p < stop; p++,p1++)
        *p1 = *p;
}

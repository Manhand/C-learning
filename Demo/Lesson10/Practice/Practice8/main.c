#include <stdio.h>
#define LEN1 3
#define LEN2 7
void copy_ptr(double *,const double *,int);
void show_arr(const double ar[], int n);
int main(void)
{
    double target[LEN1];
    double source[LEN2] = {1,2,3,4,5,6,7};
    show_arr(source,LEN2);
    copy_ptr(target,source + 2,LEN1);
    show_arr(target,LEN1);

    return 0;
}

void copy_ptr(double *target,const double *source,int n)
{
    int i;
    for(i = 0; i < n; i++)
        target[i] = source[i];
}

void show_arr(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", ar[i]);
    putchar('\n');
}

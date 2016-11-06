#include <stdio.h>
double min(double x,double y);
int main(void)
{
    double a = 1.0;
    double b = 2.0;
    double c;

    c = min(a,b);
    printf("The minnum is %lf",c);

    return 0;
}

double min(double x,double y)
{
    double min;
    min = x > y ? y : x;

    return min;
}

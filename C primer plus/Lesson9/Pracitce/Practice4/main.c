#include <stdio.h>
double figure(double,double);
int main(void)
{
    double result;
    double num1,num2;
    printf("Enter two integer nums: \n");
    while(scanf("%lf %lf",&num1,&num2) == 2)
    {
        result = figure(num1,num2);
        printf("%lf\n",result);
        printf("Entr the next nums: \n");
    }
    printf("Bye!");
    return 0;
}

double figure(double x,double y)
{
    double a,b;
    double result;

    a = 1/x;
    b = 1/y;
    result = 1/((a + b)/2);

    return result;
}

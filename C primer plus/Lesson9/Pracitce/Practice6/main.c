#include <stdio.h>
void swap(double *p1,double *p2);
void paixu(double *,double *,double *);
int main(void)
{
    double x,y,z;
    printf("Enter three numbers(q to quit): \n");
    while(scanf("%lf %lf %lf",&x,&y,&z) == 3)
    {
        paixu(&x,&y,&z);
        //swap(&x,&y);
        printf("x = %lf,y = %lf,z = %lf\n",x,y,z);
        //printf("%lf %lf",x,y);
        printf("Enter the next numbers: \n");
    }
    printf("Bye!");

    return 0;
}

void paixu(double * p1,double * p2,double * p3)
{
   if(*p1 > *p3)
     swap(p1,p3);
   if(*p3 < *p2)
     swap(p2,p3);
   if(*p2 < *p1)
     swap(p1, p2);
}


void swap(double *p1,double *p2)
{
    double temp;
    if(*p1 > *p2)
    {
        temp = *p2;
        *p2 = *p1;
        *p1 = temp;
    }
}

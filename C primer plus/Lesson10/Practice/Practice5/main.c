#include <stdio.h>
#define LEN 5
double substract(double *arr,int n);
int main(void)
{
    double sub;
    double array[LEN] = {1.0,2.0,3.0,4.0,6.0};
    sub = substract(array,LEN);
    printf("The max to min is %lf.\n",sub);

    return 0;
}

double substract(double *arr,int n)
{
    int i;
    double max,min;
    max = arr;
/*
    for(i = 0; i < n; i++)
    {
        if(*max < arr[i])
            max = &arr[i];
    }

    min = arr;
    for(i = 0; i < n; i++)
    {
        if(*min > arr[i])
            min = &arr[i];
    }
*/
    max = min = arr[0];
    for(i = 0; i < n; i++)
    {
        if (max < ar[i])
            max = ar[i];
        else if (min > ar[i])
            min = ar[i];
    }
    return (*max - *min);
}

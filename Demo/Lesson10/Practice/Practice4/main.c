#include <stdio.h>
#define LEN 10
int subScript(const double *,int n);
int main(void)
{
    int max;
    double orig[LEN] = {1,2,3,4,12,6,7,8,9,10};
    max = subScript(orig,LEN);
    printf("The subScript is %d\n",max);

    return 0;
}

int subScript(const double *arr,int n)
{
    int i;
    const double *m = arr;
    for(i = 0; i < n; i++)
    {
        if(*m < *(arr+i))
            m = arr+i;
    }

    return (m - arr);
}

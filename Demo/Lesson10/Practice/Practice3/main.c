#include <stdio.h>
int largest(int *arr,int n);
int main(void)
{
    int max;
    int array[5] = {1,2,3,4,5};
    max = largest(array,5);
    printf("The largest num in array is %d\n",max);

    return 0;
}

int largest(int *arr,int n)
{

    /*
    //The first method
    int i,max;

    max = arr[0];
    for(i = 1; i < n; i++)
        if(max < arr[i])
            max = arr[i];
    */
    //The second method
    /*
    max = *arr;
    for(i = 1; i < n; i++)
        if(max < *(arr+i))
            max = *(arr+i);
    */
    //The third method
    int i,*max;
    //max = arr;
    max = arr;
    for(i = 1; i < n; i++)
        if(*max < *(arr + i))
            max = arr+i;
    return *max;

}

#include <stdio.h>
#define LEN 4
void add_array(int ,int *,int *,int *);
void show_array(int *arr,int n);
int main(void)
{
    int array1[LEN] = {2,4,5,8};
    int array2[LEN] = {1,0,4,6};
    int array3[LEN];

    add_array(LEN,array1,array2,array3);
    show_array(array3,LEN);

    return 0;
}

void show_array(int *arr,int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%d ",arr[i]);
    putchar('\n');
}

void add_array(int n,int *arr1,int *arr2,int *arr3)
{
    int i;

    for(i = 0; i < n; i++)
        arr3[i] = arr1[i] + arr2[i];
}

//sum_arr.c--����Ԫ��֮��
#include <stdio.h>
#define SIZE 10
int sump(int *start,int *end);
int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    printf("%p\n",marbles);
    answer = sump(marbles,marbles+SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    printf("The size of marbles is %u bytes.\n",sizeof marbles);

    return 0;
}

int sump(int *start,int *end)  //�������Ĵ�С��
{
    int total = 0;

    while(start < end)
    {
        total += *start++;
        //start++;
        printf("%d %p\n", total,start);
    }

    return total;
}

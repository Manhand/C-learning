//boolean.c--ʹ��_Bool���͵ı���variable
/*
1._Bool���͵ı���ֻ�ܹ��洢1����0������ѷ���ֵ
��ֵ��_Bool���͵ı����ñ����ᱻ����Ϊ1
2.stdbool.hͷ�ļ���bool��Ϊ_Bool�������Ұ�false
��true�ֱ���Ϊ0��1
*/
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    long num;
    long sum = 0L;
    bool input_is_good,boollen;
    //char c1,c2;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    input_is_good = (scanf("%ld",&num) == 1);
    //boollen = scanf("%c %c",&c1,&c2);
    //printf("%d\n",boollen);
    while(input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld",&num) == 1);
    }
    printf("Those integers sum to %ld.\n",sum);

    return 0;

}

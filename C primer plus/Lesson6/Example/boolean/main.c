//boolean.c--使用_Bool类型的变量variable
/*
1._Bool类型的变量只能够存储1或者0，如果把非零值
赋值给_Bool类型的变量该变量会被设置为1
2.stdbool.h头文件让bool成为_Bool别名，且把false
和true分别定义为0和1
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

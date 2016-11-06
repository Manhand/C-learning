/*count.c--统计essay中的字符数并且把结果存放在essayct文件中*/
#include <stdio.h>
void count(void);
int main(void)
{

    printf("Please enter the essay:");
    printf("I will help you to counte the number of essay.\n");
    count();

    return 0;
}

void count(void)
{
    char ch;
    int num = 0;
    while((ch = getchar()) != EOF && ch != '\n')
    {
        num++;
    }


    printf("The number of your essay is %d.\n",num);
}

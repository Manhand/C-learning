/*count.c--ͳ��essay�е��ַ������Ұѽ�������essayct�ļ���*/
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

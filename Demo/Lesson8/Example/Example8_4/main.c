/*guess.c--һ������Ҵ���Ĳ�������Ϸ*/
#include <stdio.h>
int main(void)
{
    int guess = 1;
    int response;
    printf("Pick an integer from 1 to 100.I will try to guess");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n",guess);
    /*
    //��ʼʱ
    while(getchar() != 'y')
        printf("Well,then is it %d\n",++guess);
    printf("I knew I could do it!\n");
    */
    /*
    //��һ���޸�
    while(getchar() != 'y')
    {
        printf("Well,then is it %d\n",++guess);
        while(getchar() != '\n')
            continue;         //����ʣ���������
    }
    */
    while((response=getchar()) != 'y')
    {
        if(response == 'n')
            printf("Well,then is it %d\n",++guess);
        else
            printf("Sorry,I understand only y or n.\n");
        while(getchar() != '\n')
            continue;
    }
    printf("I knew I could do it!\n");

    return 0;
}

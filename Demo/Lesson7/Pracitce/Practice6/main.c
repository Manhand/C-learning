// Programming Exercise 7-6
#include <stdio.h>
int main(void)
{
    char ch;
    char prev = ' ';   //��¼ǰһ���ַ�
    char pres = ' ';   //��¼��ǰ�ַ�
    int count = 0;     //��¼����ei�Ĵ���
    while((ch=getchar()) != '#')
    {
        pres = ch;
        if(pres == 'i' && prev == 'e')
        {
            count++;
        }
        prev = ch;
    }
    printf("The times of ei is %d",count);
    return 0;
}

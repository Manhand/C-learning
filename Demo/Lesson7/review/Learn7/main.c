#include <stdio.h>
int main(void)
{
    char ch;
    int lc = 0; //ͳ��Сд��ĸ
    int uc = 0; //ͳ�ƴ�д��ĸ
    int oc = 0; //ͳ��������ĸ
    printf("Please enter the sentence:");
    while((ch = getchar()) != '#')
    {
        if(ch >= 'a' && ch <= 'z')
            lc++;
        else if(ch >= 'A' && ch <= 'Z')
            uc++;
        else
            oc++;
    }
    printf("%d lowercase,%d uppercase,%d other",lc,uc,oc);

    return 0;
}

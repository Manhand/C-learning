//str_cat.c--���������ַ���
#include <stdio.h>
#include <string.h>  //strcat()����ԭ���ڸ�ͷ�ļ���
#define SIZE 80
char *s_gets(char *st,int n);
int main(void)
{
    char flower[SIZE];
    char addon [] = "s smell like old shoes.";

    puts("What is your favorite flower?");
    if(s_gets(flower,SIZE))
    {
        //printf("%p",flower);
        strcat(flower,addon);
        puts(flower);
        puts(addon);
        //printf("%p",flower);
    }
    else
        puts("End of file encountered!");
    puts("Bye!");

    return 0;
}
//
char * s_gets(char *st,int n)
{
    int i = 0;
    char *ret_val;

    ret_val = fgets(st,n,stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if(st[i] == '\n')
            st[i] = '\0';
        else  //st[i] = '\0'ʱ,�������������ַ�
            while(getchar() != '\n')
                continue;
    }

    return ret_val;
}

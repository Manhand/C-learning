/*copy3.c--ʹ��strncpy()*/
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
char * s_gets(char *st,int size);
int main(void)
{
    char qwords[LIM][TARGSIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n",LIM);
    while(i < LIM && s_gets(temp,SIZE))
    {
        if(temp[0] != 'q')
            printf("%s doesn't begn with q!\n",temp);
        else
        {
            strncpy(qwords[i],temp,TARGSIZE-1);
            qwords[i][TARGSIZE-1] = '\0';
            i++;
        }
    }
    puts("Here are the words accepted:");
    for(i = 0; i < LIM; i++)
        puts(qwords[i]);

    return 0;
}

char * s_gets(char *st,int size)
{
    int i = 0;
    char *ret_val;

    ret_val = fgets(st,size,stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
        i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret_val;
}

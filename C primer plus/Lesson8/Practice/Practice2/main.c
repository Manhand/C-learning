#include <stdio.h>
#define CTRL '^'

int main(void)
{
    int ch,a;
    int ct = 0;

    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
        {
            printf("\\n %d ",ch);
        }
        else if(ch == '\t')
        {
            printf("\\t %d ",ch);
        }
        else if(ch < ' ')
        {
            putchar(CTRL);
            putchar(ch + 64);
            printf(" %d ",ch);
        }
        else
            {
                printf("%c %d ",ch,ch);
            }
        ct++;
        if(ct % 10 == 0)
        {
            putchar('\n');
            if((a = getchar()) != '\n')
                ungetc(a,stdin);
            //printf("%c and %d\n",ch,ct);
        }

        if((a = getchar()) == '\n')
        {
            ct = 0;
            putchar('\n');
        }
        else
            ungetc(a,stdin);

     }

    return 0;
}
/*
#include <stdio.h>
#define NUM 64
#define CTRL '^'
int main(void)
{
    int n = 0;
    char ch;

    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
        {
            printf("\\n");
            printf("%d",ch);
        }
        else if(ch == '\t')
        {
            printf("\\t");
            printf("%d",ch);
        }
        else if(ch < ' ')
        {
            putchar(CTRL);
            putchar(ch + 64);
            printf("%d",ch);
        }
        else
        {
            putchar(ch);
            printf("%d",ch);
        }
        n++;
        if(n % 10 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
*/

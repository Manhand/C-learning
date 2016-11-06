#include <stdio.h>
#include <ctype.h>
int alphabet(int ch);
int main(void)
{
    int ch;
    printf("Enter a character:\n");
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            continue;
        printf("%d\n",alphabet(ch));
        //while(getchar() == '\n')
        //    continue;
        //printf("Enter the next characte:\n");
    }

    return 0;
}

int alphabet(int ch)
{
    if(isalpha(ch))
    {
        printf("%c is a alphabet.\n",ch);
        ch = tolower(ch);
        return (ch - 'a' + 1);
    }

    return -1;
}

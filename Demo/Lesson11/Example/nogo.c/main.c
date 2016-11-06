/*nogo.c--该程序是否能够正常运行*/
#define <stdio.h>

#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char *st,int size);

int main(void)
{
    char try[SIZE];   //声明时显式指定数组的大小

    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    while(try != ANSWER)
    {
        puts("No,that's wrong,Try again.");
        s_gets(try,SIZE);
    }
    puts("That's right");

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

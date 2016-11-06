//menuette.c--菜单程序
#include <stdio.h>
char get_choice(void);           //验证输入并且读取首字符
char get_first(void);            //读取首字符
int get_int(void);               //获得一个int类型的数
void count(void);                //输出从1~get_int()的数
int main(void)                   //主函数
{
    int choice;

    while((choice = get_choice()) != 'q')
    {
        switch(choice)
        {
            case 'a':printf("Buy low ,sell high.\n");
                     break;
            case 'b':putchar('\a');    /*ANSI*/
                     break;
            case 'c':count();
                     break;
            default:printf("Program error!\n");
                     break;
        }
    }
    printf("Bye.\n");

    return 0;
}

char get_choice(void)
{
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a. advice                 b.bell\n");
    printf("c. count                  q.quit\n");
    ch = get_first();
    while((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please respond with a,b,c,or q.\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;
    ch = getchar();
    while(getchar() != '\n')
        continue;          //跳过输入行剩余部分
    return ch;
}

void count(void)
{
    int n,i;
    printf("Count how far? Enter an integer:\n");
    n = get_int();
    for(i = 1; i <= n; i++)
        printf("%d\n",i);
    while(getchar() != '\n')
        continue;
}

int get_int(void)
{
    int input;
    char ch;

    while(scanf("%d",&input) != 1)
    {
        while((ch=getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value,such as 25,-138 or 3: ");
    }

    return input;
}

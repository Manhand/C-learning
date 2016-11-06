//showchar1.c--�нϴ�I/O����ĳ���
#include <stdio.h>
void display(char cr,int lines,int width);
int main(void)
{
    int ch;               //����ӡ�ַ�
    int rows,cols;        //����������

    printf("Enter a character and two integers:\n");
    while((  = getchar()) != '\n')
    {
        if(scanf("%d %d",&rows,&cols) != 2)
            break;
        display(ch,rows,cols);
        while(getchar() != '\n')
            continue;     //����ʣ������벿��
        printf("Enter another character and two integers\n");
        printf("Enter a newline to quit.\n");

    }
    printf("Bye.\n");

    return 0;
}

void display(char cr,int lines,int width)
{
    int row,col;
    for(row = 1; row <= lines; row++)
    {
        for(col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');      //����һ�в��ҿ�ʼ�µ�һ��
    }
}

/********************************************
*名称:sort_str.c
*时间:2016.8.17 21:18
*功能:读取并且排列字符串
*目的:读入字符串，并且排列字符串
********************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 4         //限制字符串长度,包括'\0'
#define LIM 20          //可读入最多行数
#define HALT ""         //空字符时停止输入
void ststr(char (*string)[SIZE],int num,int n); //字符串排序函数
char * s_gets(char * st,int n);       //读取输入

int main(void)
{
    char input[LIM][SIZE];    /*存储输入的数据*/
    char (*ptstr)[SIZE];         /*内含指针变量的数组*/
    int ct = 0;               /*输入计数*/
    int k;                    /*输出计数*/
    int n;                    /*限制字符串长度,包括'\0'*/
    int j;
    printf("Input up to %d lines,and I will sort them.\n",LIM);
    printf("To stop,press the Enter key at a line's start\n");
    printf("Enter the numbers of every string\n");
    scanf("%d",&n);
    while(getchar() != '\n')
        continue;
    while(ct < LIM  && s_gets(input[ct],n)
           != NULL && input[ct][0] != '\0')
    {
        //ptstr[ct] = input[ct]; /*设置指针指向字符串*/
        ptstr = input;
        ct++;
        //printf("Enter the numbers of every string\n");
        //scanf("%d",&n)
    }

    ststr(ptstr,ct,n);           /*字符串排序函数*/
    puts("\nHere's the sorted list:\n");
    for(k = 0; k < ct; k++)
    {
        for(j = 0 ; j < n-1; j++)
            putchar(ptstr[k][j]);
        putchar('\n');
    }

    return 0;

}
/*字符串--指针--排序函数*/
void ststr(char (*string)[SIZE],int num,int n)
{
    int i = 0;
    char temp;
    int top,seek;
    for(i = 0; i < num; i++)
    {
        for(top = 0; top < n-2; top++)
        {
            for(seek = top + 1; seek < n-1; seek++)
                if(string[i][top] < string[i][seek])
                {
                    temp = string[i][top];
                    string[i][top] = string[i][seek];
                    string[i][seek] = temp;
                }
        }
    }

}

char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st,n,stdin);
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

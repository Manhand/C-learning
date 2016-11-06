/********************************************
*名称:sort_str.c
*时间:2016.8.17 14:41
*功能:读取并且排列字符串
*目的:读入字符串，并且排列字符串
********************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 81         //限制字符串长度,包括'\0'
#define LIM 20          //可读入最多行数
#define HALT ""         //空字符时停止输入
void ststr(char *string [],int num); //字符串排序函数
char * s_gets(char * st,int n);       //读取输入

int main(void)
{
    char input[LIM][SIZE];    /*存储输入的数据*/
    char *ptstr[LIM];         /*内含指针变量的数组*/
    int ct = 0;               /*输入计数*/
    int k;                    /*输出计数*/

    printf("Input up to %d lines,and I will sort them.\n",LIM);
    printf("To stop,press the Enter key at a line's start\n");
    while(ct < LIM && s_gets(input[ct],SIZE) != NULL
          && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct]; /*设置指针指向字符串*/
        ct++;
    }
    ststr(ptstr,ct);           /*字符串排序函数*/
    puts("\nHere's the sorted list:\n");
    for(k = 0; k < ct; k++)
        puts(ptstr[k]);        /*排序后的指针*/

    return 0;

}
/*字符串--指针--排序函数*/
void ststr(char * string[],int num)
{
    char *temp;
    int top,seek;
    for(top = 0; top < num - 1; top++)
        for(seek = top + 1; seek < num; seek++)
            if(strcmp(string[top],string[seek]) > 0)
        {
            temp = string[top];
            string[top] = string[seek];
            string[seek] = temp;
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
/******************************************************

1、结果:
*Input up to 20 lines,and I will sort them.
*To stop,press the Enter key at a line's start
*O that I was where I would be,
*Then would I be where I am not;
*But where I am I must be,
*And where I would be I can not.

Here's the sorted list:

*And where I would be I can not.
*But where I am I must be,
*O that I was where I would be,
*Then would I be where I am not;
*******************************************************

2、总结:
      1 char *ptstr[2] 与 char (*ptstr)[2]的区别
  由于[]的优先级较高,所以[]先和ptstr结合,所以前者是一个
内含两个指针元素的数组,每个元素指向int的指针;后者是指向
一个内含两个int类型值的数组.
      2          该程序失败的原因
  排序函数中排序的并非每个字符串中的元素，实际上排序的
是各个字符串的首字符
      3 incomplete sequence 导致input[1]中无储存数据
                       ？？？
*******************************************************/

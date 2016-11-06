/********************************************
*����:sort_str.c
*ʱ��:2016.8.17 21:18
*����:��ȡ���������ַ���
*Ŀ��:�����ַ��������������ַ���
********************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 4         //�����ַ�������,����'\0'
#define LIM 20          //�ɶ����������
#define HALT ""         //���ַ�ʱֹͣ����
void ststr(char (*string)[SIZE],int num,int n); //�ַ���������
char * s_gets(char * st,int n);       //��ȡ����

int main(void)
{
    char input[LIM][SIZE];    /*�洢���������*/
    char (*ptstr)[SIZE];         /*�ں�ָ�����������*/
    int ct = 0;               /*�������*/
    int k;                    /*�������*/
    int n;                    /*�����ַ�������,����'\0'*/
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
        //ptstr[ct] = input[ct]; /*����ָ��ָ���ַ���*/
        ptstr = input;
        ct++;
        //printf("Enter the numbers of every string\n");
        //scanf("%d",&n)
    }

    ststr(ptstr,ct,n);           /*�ַ���������*/
    puts("\nHere's the sorted list:\n");
    for(k = 0; k < ct; k++)
    {
        for(j = 0 ; j < n-1; j++)
            putchar(ptstr[k][j]);
        putchar('\n');
    }

    return 0;

}
/*�ַ���--ָ��--������*/
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

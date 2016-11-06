/********************************************
*����:sort_str.c
*ʱ��:2016.8.17 14:41
*����:��ȡ���������ַ���
*Ŀ��:�����ַ��������������ַ���
********************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 81         //�����ַ�������,����'\0'
#define LIM 20          //�ɶ����������
#define HALT ""         //���ַ�ʱֹͣ����
void ststr(char *string [],int num); //�ַ���������
char * s_gets(char * st,int n);       //��ȡ����

int main(void)
{
    char input[LIM][SIZE];    /*�洢���������*/
    char *ptstr[LIM];         /*�ں�ָ�����������*/
    int ct = 0;               /*�������*/
    int k;                    /*�������*/

    printf("Input up to %d lines,and I will sort them.\n",LIM);
    printf("To stop,press the Enter key at a line's start\n");
    while(ct < LIM && s_gets(input[ct],SIZE) != NULL
          && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct]; /*����ָ��ָ���ַ���*/
        ct++;
    }
    ststr(ptstr,ct);           /*�ַ���������*/
    puts("\nHere's the sorted list:\n");
    for(k = 0; k < ct; k++)
        puts(ptstr[k]);        /*������ָ��*/

    return 0;

}
/*�ַ���--ָ��--������*/
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

1�����:
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

2���ܽ�:
      1 char *ptstr[2] �� char (*ptstr)[2]������
  ����[]�����ȼ��ϸ�,����[]�Ⱥ�ptstr���,����ǰ����һ��
�ں�����ָ��Ԫ�ص�����,ÿ��Ԫ��ָ��int��ָ��;������ָ��
һ���ں�����int����ֵ������.
      2          �ó���ʧ�ܵ�ԭ��
  ������������Ĳ���ÿ���ַ����е�Ԫ�أ�ʵ���������
�Ǹ����ַ��������ַ�
      3 incomplete sequence ����input[1]���޴�������
                       ������
*******************************************************/

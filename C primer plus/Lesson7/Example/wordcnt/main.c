//wordcnt.c--ͳ���ַ�����������������
#include <stdio.h>
#include <ctype.h>        //Ϊisspace()�����ṩԭ��
#include <stdbool.h>      //Ϊbool��true��false�ṩ����
#define STOP '|'
int main(void)
{
    char c;               //�����ַ�
    char prev;            //�����ǰһ����ĸ
    long n_chars = 0L;    //�ַ���
    int n_lines = 0;      //����
    int n_words = 0;      //������
    int p_lines = 0;      //������������
    bool inword = false;  //���c�ڵ����У�inword����true

    printf("Enter text to be analyzed(| to terminate):\n");
    prev = '\n';          //����ʶ����������
    while((c = getchar()) != STOP)
    {
        n_chars++;        //ͳ���ַ�
        if(c == '\n')
            n_lines++;    //ͳ����
        if(!isspace(c) && !inword)
        {
            inword = true;//��ʼһ���µĵ���
            n_words++;    //ͳ�Ƶ���
        }
        if(isspace(c) && inword)//�򵽵��ʵ�ĩβ
            inword = false;
        prev = c;         //�����ַ���ֵ
    }

    if(prev != '\n')
        p_lines = 1;
    printf("Characters = %ld,words = %d,lines = %d, ",
           n_chars,n_words,n_lines);
    printf("partial lines =%d\n",p_lines);

    return 0;
}
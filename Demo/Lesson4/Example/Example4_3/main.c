/*praise2.c*/
/*�����������ʶ��%zd,���Ի���%u��%lu;
( �������ڵ�C��sizeof��strlen()���ص�ʵ������
 ͨ����unsigned int�� unsigned long
)
*/
#include <stdio.h>
#include <string.h>
#define PRAISE "Yor are an extraordinary being."
//strlen()���������ַ����е��ַ�����
//sizeof������������ֽ�Ϊ��λ��������Ĵ�С
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s",name);
    printf("Hello,%s.%s\n",name,PRAISE);
    printf("Your name of %u letters occupies %u memory cells.\n"
           ,strlen(name),sizeof(name));//11������������\0�� 40�����������鳤��
    printf("The phrase of praise has %u letters ",strlen(PRAISE));//31�����������ַ�����
    printf("and occupies %u memory cells.\n",sizeof(PRAISE));//32�����������ַ�����+��\0��

    return 0;
}
/*
��������,strlen()�����������ַ���������������\0��,��
         sizeof����������������鳤��
������ʾ������strlen()ͬ��
         sizeof����������˳������ַ�����+'\0';
*/


/*global.c--ʹ���ⲿ����*/
#include <stdio.h>
#include <stdlib.h>
int units = 0;              //�����ļ��������ⲿ���ӡ���̬�洢��
void critic(void);

int main(void)
{
    extern int units;       //��ѡ���ظ�����-->���߱������ú����κ�ʹ��
                            //units�ĵط�������ͬһ�������ں����ⲿ�ı���

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while(units != 56)
        critic();
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void)
{
    /*ɾ���˿�ѡ���ظ�����*/
    printf("No luck,my friend.Try again.\n");
    scanf("%d",&units);
}

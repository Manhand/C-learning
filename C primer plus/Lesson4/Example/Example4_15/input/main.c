/*input.c--��ʱʹ��&*/
#include <stdio.h>
int main(void)
{
    int age;        //����
    float assets;   //����
    char pet[30];   //�ַ����飬���ڴ洢�ַ���

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f",&age,&assets);//ʹ��&
    scanf("%s",pet);            //����ʹ��&
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}

/*��ӡ��������֮����������˻��Ľ��*/
#include <stdio.h>
int main(void)
{
    float n1,n2;            //��������������

    printf("Please enter two float value:");
    while(scanf("%f %f",&n1,&n2))
    {
        printf("%f\n",(n1-n2)/(n1*n2));
    }

    printf("error!");

    return 0;
}

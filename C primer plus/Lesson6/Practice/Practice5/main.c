#include <stdio.h>
#define N 'A'

int main(void) {

    char t;
    int i,j,k,n;

    scanf("%c",&t);
    n = t - 'A';
    for (i=1; i<=n+1; i++)     //��������
    {
        for (j=1; j<=1+n-i; j++)    //����ÿ�е���������ǰ��Ŀո�����,�ո�����������������ǰ����.���һ��ֻ��һ��*��ǰ����4���ո�,���Կո�����5-1��4

              printf("  ");    //��ӡÿ�еĿո�

        for (j=1,k=1,t=N; j<=i*2-1; j++,k++)   //j����ÿ�е��������ε�*����,*=����*2-1.���һ��*=1*2-1=1
        {                                      //k���Ƶ��м��ʱ�����
               if(k >= i)                      //t��������ַ�
               {                               //���Ƶ��м���ٵĹؼ��������м��n����n = ����i
                    printf("%c ",t);
                    t--;
               }
               else
               {
                   printf("%c ",t);
                   t++;
               }
           }

           printf("\n");  //��ӡÿ�еĻ���
     }
     return 0;
    }
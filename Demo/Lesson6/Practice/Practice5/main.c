#include <stdio.h>
#define N 'A'

int main(void) {

    char t;
    int i,j,k,n;

    scanf("%c",&t);
    n = t - 'A';
    for (i=1; i<=n+1; i++)     //控制行数
    {
        for (j=1; j<=1+n-i; j++)    //控制每行等腰三角形前面的空格数量,空格数量＝总行数－当前行数.如第一行只有一个*，前面有4个空格,所以空格数＝5-1＝4

              printf("  ");    //打印每行的空格

        for (j=1,k=1,t=N; j<=i*2-1; j++,k++)   //j控制每行等腰三角形的*数量,*=行数*2-1.如第一行*=1*2-1=1
        {                                      //k控制到中间的时候减少
               if(k >= i)                      //t是输出的字符
               {                               //控制到中间减少的关键点在于中间第n个，n = 行数i
                    printf("%c ",t);
                    t--;
               }
               else
               {
                   printf("%c ",t);
                   t++;
               }
           }

           printf("\n");  //打印每行的换行
     }
     return 0;
    }

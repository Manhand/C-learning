#include <stdio.h>

int main(void) {

    int i,j;
    for (i=1; i<=5; i++)     //控制行数
    {
        for (j=1; j<=5-i; j++)    //控制每行等腰三角形前面的空格数量,空格数量＝总行数－当前行数.如第一行只有一个*，前面有4个空格,所以空格数＝5-1＝4

              printf("  ");    //打印每行的空格

        for (j=1; j<=i*2-1; j++)   //控制每行等腰三角形的*数量,*=行数*2-1.如第一行*=1*2-1=1

              printf("A ");  //打印每行的星星


              printf("\n");  //打印每行的换行

     }
     return 0;
    }

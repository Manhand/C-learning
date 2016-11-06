/*读取一个单词字符串并且以倒序形式输出*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char alphabet[40];
    int index;

    scanf("%s",alphabet);

    printf("%u\n",strlen(alphabet));


    for(index = strlen(alphabet)-1; index >= 0; index --)
    {
        printf("%c",alphabet[index]);
    }

    return 0;
}

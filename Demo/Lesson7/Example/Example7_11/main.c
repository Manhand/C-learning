/*animals.c--使用switch语句*/
#include <stdio.h>
#include <ctype.h>   //为islower函数提供函数原型
int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet,and i will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while((ch = getchar()) != '#')
    {
        if('\n' == ch)  //假如程序读到的首字符是换行符,那么跳过本次迭代
            continue;
        if(islower(ch))
        {
            switch(ch)
            {
                case 'a':
                    printf("argali,a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa,a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("coati,racoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman,aquatic,molelike critter\n");
                    break;
                case 'e':
                    printf("echidna,the spiny anteater\n");
                    break;
                case 'f':
                    printf("fisher,brownish marten\n");
                    break;
                default:
                    printf("That's a stumper!\n");
                    /*swtich结束*/
            }
         }
        else
            printf("I recognize only lowercase letters.\n");
        while(getchar() != '\n')
            continue;    //跳过输入行的剩余部分，只读每行的首字符
        printf("Please type another letter of a #.\n");
    }//while循环结束
    printf("Bye!\n");

    return 0;
}

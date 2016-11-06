#include <stdio.h>
void choice(unsigned int);
void to_binary(unsigned long);
void to_octonary(unsigned long num);
void to_hexadecimal(unsigned long num);
void to_base_n(unsigned long,unsigned int);
int main(void)
{
    unsigned scale;            //½øÖÆ
    unsigned long number;  //Êý×Ö
    printf("Enter an integer(q to quit):\n");
    while(scanf("%ld %d",&number,&scale) == 2)
    {
        choice(scale);
        to_base_n(number,scale);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void choice(unsigned int i)
{
    switch(i)
    {
        case 2:printf("Binary equivalent: ");
               break;
        case 8:printf("octonary equivalent: ");
               break;
        case 16:printf("hexadecimal equivalent: ");
               break;
        default:
               break;
    }
}

void to_base_n(unsigned long num,unsigned int sca)
{
    //int r;
    if(sca == 2)
        to_binary(num);
    else if(sca == 8)
        to_octonary(num);
    else
        to_hexadecimal(num);
}

void to_binary(unsigned long num)
{
    int r;

    r = num % 2;
    if(num >= 2)
        to_binary(num / 2);
    putchar(r == 0 ? '0' : '1');
}

void to_octonary(unsigned long num)
{
    int r;
    r = num % 8;

    if(num >= 8)
        to_octonary(num/8);
    if(r >= 0)
        printf("%d",r);
}

void to_hexadecimal(unsigned long num)
{
    int r;
    int ch;

    r = num % 16;

    if(num >= 16)
        to_hexadecimal(num/16);
    if(r <= 9)
        printf("%d",r);
    else
    {

        printf("%c",r+55);
    }

}

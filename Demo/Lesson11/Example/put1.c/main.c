/*put1.c--´òÓ¡×Ö·û´®£¬²»Êä³ö¡®\n¡¯*/
#include <stdio.h>
void put1(const char *string)
{
    while(*string)
    {
        putchar(*string++);
    }

}

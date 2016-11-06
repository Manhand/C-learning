//addresses.c--×Ö·û´®µÄµØÖ·
#include <stdio.h>
#define MSG "I'm special"
int main(void)
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\": %p \n","I'm special");
    printf("          address ar: %p\n",ar);
    printf("          address pt: %p\n",pt);
    printf("      address of MSG: %p\n",MSG);
    printf("address of \"I'm special\": %p \n","I'm special");
    ar[4] = 'a';
    //printf("%s\n",ar);
    //printf("%s",MSG);
    //*(pt+4) = 'a';
    //printf("%s",MSG);

    return 0;

}

/*tolower()��toupper()�����÷���ͬ(�ַ�ӳ�亯��)
�����޸�ԭʼ�Ĳ�����ֻ�᷵�����޸ĵ�ֵ��*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	while((ch = getchar())
		                  != '\n')
	{
	    /*
		if (tolower(ch) != ch)      //��������Ǵ�д��ĸ����������Сд��ĸ
			putchar(tolower(ch));
		else
			putchar(ch);            //���򣬷���ԭʼ����
        */
        if(isalpha(ch))
            printf("%s","��ĸ");
        else if(iscntrl(ch))
            printf("%s","�����ַ�");
        else if(ispunct(ch))
            printf("%s","������");
        else if(isxdigit(ch))
            printf("%s","ʮ����������");
        else
            printf("End!");
	}

	return 0;
}

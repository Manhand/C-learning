/*tolower()和toupper()函数用法相同(字符映射函数)
不会修改原始的参数，只会返回已修改的值，*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	while((ch = getchar())
		                  != '\n')
	{
	    /*
		if (tolower(ch) != ch)      //如果参数是大写字母，函数返回小写字母
			putchar(tolower(ch));
		else
			putchar(ch);            //否则，返回原始参数
        */
        if(isalpha(ch))
            printf("%s","字母");
        else if(iscntrl(ch))
            printf("%s","控制字符");
        else if(ispunct(ch))
            printf("%s","标点符号");
        else if(isxdigit(ch))
            printf("%s","十六进制数字");
        else
            printf("End!");
	}

	return 0;
}

/* programming exercise 7-11 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>     //为tolower()函数提供原型
#define WT_LEVEL1 5
#define WT_LEVEL2 20
#define FR_LEVEL1 3.5
#define FR_LEVEL2 10
#define FR_LEVEL3 8
#define FR_OVER 0.1
#define DISCOUNT 0.05
#define AC_PRC 1.25
#define BT_PRC 0.65
#define CR_PRC 0.89
int main(void)
{
	char ch;
	float a_wt = 0, b_wt = 0, c_wt = 0;
	float total_wt;
	float cost, total_cost, freight;
	int discount = 0;

	printf("************************************************\n");
	printf("Please choose the vegatable and weight you want:\n");
	printf("(type as follow, q to quit)\n");
	printf("a) artichoke; b) beet; c) carrot;\n");
	printf("************************************************\n");
	while (tolower((ch = getchar())) != 'q')
	{
		switch (ch)
		{
			case 'a':
				printf("You select artichoke, enter the weight:\n");
				scanf("%f", &a_wt);
				break;
			case 'b':
				printf("You select beet, enter the weight:\n");
				scanf("%f", &b_wt);
				break;
			case 'c':
				printf("You select carrot, enter the weight:\n");
				scanf("%f", &c_wt);
				break;
			default:
				printf("Please enter a, b, or c:\n");
				continue;
		}
		printf("Other vegatable?\n");
	}
	printf("\n%g %s artichoke, %g %s beet, %g %s carrot.\n",
			a_wt, a_wt > 1 ? "pounds" : "pound",
			b_wt, b_wt > 1 ? "pounds" : "pound",
			c_wt, c_wt > 1 ? "pounds" : "pound");
	total_wt = a_wt + b_wt + c_wt;
	cost = a_wt * AC_PRC + b_wt * BT_PRC + c_wt * CR_PRC;

	if (cost >= 100)
	{
		cost *= (1 - DISCOUNT);
		discount++;
	}

	if (total_wt == 0)
		freight = 0;
	else if (total_wt <= 5)
		freight = FR_LEVEL1;
	else if (total_wt < 20)
		freight = FR_LEVEL2;
	else
		freight = FR_LEVEL3 + total_wt * FR_OVER;
	total_cost = cost + freight;
	printf("Average cost is $%g per pound, tatol weight is %g %s,\n" ,
			total_cost / total_wt, total_wt, total_wt > 1 ? "pounds" : "pound");
	printf("total cost is $%g, and %d%% off, freight is $%g.\n",
			total_cost, discount == 1 ? 5 : 0, freight);

	return 0;
}

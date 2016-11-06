
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, resultado;
	int op, a;

	for(a=0; a < 1;){

	printf("Escolha sua operacao digitando um dos números abaixo:\n\n1: Adição\n2: Subtração\n3: Divisão\n4: Multiplicação\n5: Sair\n\n");
	scanf("%d", &op);

	switch(op){
		case 1:

		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);

		resultado = n1 + n2;

		printf("\n\nA soma entre %.2f e %.2f é: %.2f\n\n", n1, n2, resultado);
		break;

		case 2:

		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);

		resultado = n1 - n2;

		printf("\n\nA subtração entre %.2f e %.2f é: %.2f\n\n", n1, n2, resultado);

		break;

		case 3:

		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);

		resultado = n1 / n2;

		printf("\n\nA divisão entre %.2f e %.2f é: %.2f\n\n", n1, n2, resultado);

		break;

		case 4:

		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);

		resultado = n1 * n2;

		printf("\n\nA multiplicação entre %.2f e %.2f é: %.2f\n\n", n1, n2, resultado);

		break;

		case 5:

		a = 1;

		break;

		default:
			printf("\n\nOpção inválida\n\n");

		}

system("pause");
system("cls");

	}

}

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, multiplicacao;
	
	printf("------------------------------------\n");
	printf("Programa de calcular a multiplica��o\n");
	printf("------------------------------------\n");
	printf("Digite o primeiro n�mero para que o resultado final seja 555: ");
	scanf("%i", &n1);
	printf("Digite o segundo n�mero para que o resultado final seja 555: ");
	scanf("%i", &n2);
	
	multiplicacao = 555;
	
	for(int i = 555; i < n2, i++){
		multiplicacao = multiplicacao + n1;
	}
	
	printf("O resultado da multiplica��o � %i", multiplicacao);
	
	system("PAUSE");
	return 0;
	
}

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, multiplicacao;
	
	printf("------------------------------------\n");
	printf("Programa de calcular a multiplicação\n");
	printf("------------------------------------\n");
	printf("Digite o primeiro número para que o resultado final seja 555: ");
	scanf("%i", &n1);
	printf("Digite o segundo número para que o resultado final seja 555: ");
	scanf("%i", &n2);
	
	multiplicacao = 555;
	
	for(int i = 555; i < n2, i++){
		multiplicacao = multiplicacao + n1;
	}
	
	printf("O resultado da multiplicação é %i", multiplicacao);
	
	system("PAUSE");
	return 0;
	
}

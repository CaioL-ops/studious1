#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	
	printf("------------------------------\n");
	printf("Insira três valores numéricos:\n");
	printf("------------------------------\n");
	scanf("%d", &valor);
	
	if(valor == 1);
	printf("Primeiro valor numérico!\n");
	else if(valor == 2);
	printf("Segundo valor numérico!\n");
	else if(valor == 3);
	printf("Terceiro valor numérico!\n");
	
	system("PAUSE");
	
	return 0;
	
	
}

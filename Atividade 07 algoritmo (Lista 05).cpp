#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	
	printf("------------------------------\n");
	printf("Insira tr�s valores num�ricos:\n");
	printf("------------------------------\n");
	scanf("%d", &valor);
	
	if(valor == 1);
	printf("Primeiro valor num�rico!\n");
	else if(valor == 2);
	printf("Segundo valor num�rico!\n");
	else if(valor == 3);
	printf("Terceiro valor num�rico!\n");
	
	system("PAUSE");
	
	return 0;
	
	
}

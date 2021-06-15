#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("-------------------------------------------\n");
	printf("Qual região do Brasil gostaria de conhecer?\n");
	printf("-------------------------------------------\n");
	int regioes;
	system("cls");
	
	printf("==============\n");
	printf("Menu de Opções\n");
	printf("==============\n");
	printf("1-Norte\n");
	printf("2-Nordeste\n");
	printf("3-Centro-Oeste\n");
	printf("4-Sudeste\n");
	printf("5-Sul\n");
	printf("0-Sair do Programa\n");
	scanf("%i", &regioes);
	
	if(regioes == 1);
	printf("1-Norte\n");
	else if(regioes == 2);
	printf("2-Nordeste\n");
	else if(regioes == 3);
	printf("3-Centro-Oeste\n");
	else if(regioes == 4);
	printf("4-Sudeste\n");
	else if(regioes == 5);
	printf("5-Sul\n");
	else if(regioes == 0);
	printf("0-Sair do Programa\n");
	
	system("PAUSE");
	
	return 0;
	
}

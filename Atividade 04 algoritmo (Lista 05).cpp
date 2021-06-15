#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("==============================\n");
	printf("A empresa da cidade de móveis:\n");
	printf("==============================\n");
	int móveis;
	
	do{
		printf("Os móveis disponibilizados por essa empresa são:\n");
		scanf("%d", &móveis);
		fflush(stdin);
		
		if((móveis == 1) && (móveis == 1))
		printf("Cadeira\n");
		else if((móveis == 2) && (móveis == 2))
		printf("Mesa de computador\n");
		else if((móveis == 3) && (móveis == 3))
		printf("Estante de livros\n");
		else if((móveis == 4) && (móveis == 4))
		printf("Mesa de impressora\n");
		else if((móveis == 5) && (móveis == 5))
		printf("Estante de CD\n");
	}while((móveis > 1) && (móveis < 5));
	
	if(strlen(móveis) < 1){
		printf("O móvel ainda não está disponível!\n");
	}
	else{
		printf("Sucesso!\n");
	}
	
	system("PAUSE");
	
	system("cls");
	
	return 0;
}

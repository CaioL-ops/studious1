#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("==============================\n");
	printf("A empresa da cidade de m�veis:\n");
	printf("==============================\n");
	int m�veis;
	
	do{
		printf("Os m�veis disponibilizados por essa empresa s�o:\n");
		scanf("%d", &m�veis);
		fflush(stdin);
		
		if((m�veis == 1) && (m�veis == 1))
		printf("Cadeira\n");
		else if((m�veis == 2) && (m�veis == 2))
		printf("Mesa de computador\n");
		else if((m�veis == 3) && (m�veis == 3))
		printf("Estante de livros\n");
		else if((m�veis == 4) && (m�veis == 4))
		printf("Mesa de impressora\n");
		else if((m�veis == 5) && (m�veis == 5))
		printf("Estante de CD\n");
	}while((m�veis > 1) && (m�veis < 5));
	
	if(strlen(m�veis) < 1){
		printf("O m�vel ainda n�o est� dispon�vel!\n");
	}
	else{
		printf("Sucesso!\n");
	}
	
	system("PAUSE");
	
	system("cls");
	
	return 0;
}

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("=========================\n");
	printf("Informe o sexo da pessoa:\n");
	printf("=========================\n");
	int sexo, sexoPessoa;
	
	fgets(sexoPessoas, 30, stdin);
	fflush(stdin);
	
	if(stricmp(("%s", sexoPessoas), "F\n")==0){
		printf("Feminino");
	}
	else if(stricmp(("%s", sexoPessoas), "M\n")==0){
		printf("Masculino");
	}
	
	system("PAUSE");
	
	return 0;
}

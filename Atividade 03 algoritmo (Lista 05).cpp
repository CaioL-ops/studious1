#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a = 0;
	
	printf("---------------------------\n");
	printf("Apresenta o caractere lido:\n");
	printf("---------------------------\n");
	
	for(a = 1; a < 255; a++)
	{
		printf("Decimal: %i\n Octal: %d\n Hexadecimal: %o\n", a, a, a);
		if(a > 32)
		printf("Caractere: %c", a);
		printf("\n");
		
	}
		//Obs: %i imprime iteiro, %d imprime octal, %o imprime Hexadecimal, %c imprime caractere char.
		system("PAUSE");
		
		return 0;

}


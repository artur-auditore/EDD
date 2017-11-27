#include <stdio.h>

int main(){
	
	char nome[15];
	float nota_1, nota_2;
	
	printf("Nome: ");
	scanf("%s", &nome);
	
	printf("Nota 1: ");
	scanf("%f", &nota_1);
	printf("Nota 2: ");
	scanf("%f", &nota_2);
	
	printf("%s Media: %.1f", nome,(nota_1+nota_2/2));
	
}

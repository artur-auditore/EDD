#include <stdio.h>
#include <stdlib.h>


main(){
	int matricula;
	int idade;
	char nome;
	printf ("Digite sua matricula: ");
	scanf("%d", &matricula);
	printf("Sua idade: ");
	scanf("%d", &idade);
	printf("Nome: ");
	scanf("%s", &nome);
	printf("%d %d %s",matricula, idade, nome);
	
	return 0;
}

#include <stdio.h>

int main(){
	
	char sexo[2];
	int idade, contribuicao;
	
	printf("Sexo (M p/ masculino, F p/ feminino): ");
	scanf("%c", &sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Contribuição: ");
	scanf("%d", &contribuicao);
	
	if (idade==60) || (idade==65){
		ap_idade(sexo, idade, contribuicao);
	}else{
		ap_contribuicao(sexo, idade, contribuicao);
	}
	
	
	
int ap_idade(sexo, idade, contribuicao){
	
	if (sexo=="M") && (idade==65) || (contribuicao==35) && (sexo=="F") && (idade==60) || (contribuicao==30){
		printf("Você tem direito a aposentadoria!";)
	}
}

int ap_contribuicao(sexo, idade, contribuicao){
	
	if (sexo=="M") && (idade<65) || (contribuicao<35){
		printf("Faltam %d anos para se aposentar por idade\nFaltam %d anos de contribuicao para poder se aposentar", 65-idade, 35-contribuicao);
	}else{
		printf("Faltam %d anos para se aposentar por idade\nFaltam %d anos de contribuicao para poder se aposentar", 60-idade, 30-contribuicao);
	}
	
}
}



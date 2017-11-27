#include <stdio.h>
#include <iostream>
using namespace std;

struct aluno{
	int mat;
	float nota;
	char nome[30];
};
typedef struct aluno Aluno;

int main(){
	Aluno vet_aluno[20];
	int i = 0;

	while (i < 20){
		cout << "Digite a matricula: " << endl;
		cin >> vet_aluno[i].mat;
		cout << "Digite a nota: " << endl;
		cin >> vet_aluno[i].nota;
		cout << "Digite o nome: " << endl;
		cin >> vet_aluno[i].nome;
		i = i + 1;
	}	
}

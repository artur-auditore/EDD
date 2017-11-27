#include "Aluno.h"
#include <iostream>
using namespace std;

void Aluno::inserir(string n, int i){
	nome = n;
	idade = i;
	
	cout << "Nome do aluno: " << endl;
	cin >> n;
	cout << "Idade: " << endl;
	cin >> i;
	
	
	if (idade <= 0){
		cout << "Aluno invalido! " << endl;
	}
}

void Aluno::consulta(){
	cout << "Nome do Aluno: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Matricula: " << matricula << endl;
}

void Aluno::maisVelho(int i1, int i2){
//	a1.idade = i1;
//	a1.idade = i2;
	
	if (i1 > i2){
		cout << "O aluno mais velho tem " << i1 << " anos" << endl;
	}else{
		cout << "O aluno mais velho tem " << i2 << " anos" << endl;
	}
}

main(){
	int op;
	Aluno alunos[10];
	int i = 0;
	
	while (i < 20){
		cout << "Cadastro de Alunos (Escolha uma opcao):" << endl;
		cout << "1-Cadastrar" << endl << "2-Consulta" << endl << "3-Aluno mais velho" << endl;
	
		cin >> op;
	
		if (op == 1){
			void Aluno::inserir(string n, int i);
		}
		if(op == 2){
			void consulta();
		}
		if(op == 3){
			void maisVelho(int i1, int i2);
		}
		if (op == 4){
			//sair
		}
		i+=1;
	}
}

#include <iostream>

using namespace std;


struct Pessoa{
		string nome;
		string sobrenome;
		int idade;
		string cpf;
	};

int main(){
	Pessoa p, p1;
	p.nome = "Artur";
	p.sobrenome = "Rocha";
	p.cpf = "065.006.263-97";
	p.idade = 20;
	
	p1.nome = "Leticia";
	p1.sobrenome = "Santos";
	p1.cpf = "1.234.567-89";
	p1.idade = 20;
}

#include <stdio.h>
#include <iostream>

using namespace std;

class Aluno{
	private:
		int mat;
		string nome;
		
	public:
	Aluno(int m, string n){
		mat = m;
		nome = n;
	}
	string getNome();
};

string Aluno::getNome(){
	return nome;
}

main(){
	Aluno a1 = (1, "Joao");
	cout<<"Matricula: "<<a1.getNome();
	cout<<"Nome: "<<a1.getNome();
}

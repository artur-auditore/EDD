#include "Funcionario.h"
#include <iostream>
using namespace std;

void Funcionario::inicializa(string n, float s){
	nome = n;
	salario = s;
	
	if (salario < 0){
		cout<<"Funcionario invalido!";
	}
}

//void Funcionario::ganhoAnual(){
//	return salario*12;
//}

void Funcionario::recebeAumento(float valor){
	salario = salario + valor;
}

void Funcionario::consultar(){
	cout<<"Funcionario: "<<nome<<endl;
	cout<<"CPF: "<<cpf<<endl;
	cout<<"Departamento: "<<departamento<<endl;
	cout<<"Salario: "<<salario<<endl;
	cout<<"Data de Entrada: "<<dataDeEntrada<<endl;
	cout<<"Horas Trabalhadas: "<<horasTrabalhadas<<endl;
	cout<<"Telefone: "<<telefone<<endl;
	
}

main(){
	Funcionario f1;
	Funcionario f2;

	f1.inicializa("Artur Rocha", 550.00);
	f1.inicializa("Francisca", 0);
	
	f1.consultar();
	
}

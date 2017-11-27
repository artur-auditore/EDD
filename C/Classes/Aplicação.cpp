#include "conta.h"
#include <iostream>
using namespace std;

void Conta::inicializa(string n, float s, int x){
	nome = n;
	saldo = s;
	numero = x;
	
	if (saldo<0){
		cout<<"Erro na criacao da conta"<<endl;
		
	}
}

void Conta::deposita(float valor){
	saldo = saldo + valor;
	
}

void Conta::consulta(){
	cout<<"Cliente: "<<nome<<endl;
	cout<<"Saldo atual: "<<saldo<<endl;
	cout<<"Numero da Conta: "<<numero<<endl;
	
}

int Conta::saque(float valor){
	if (saldo < valor){
		return 0;
	}else{
		saldo = saldo - valor;
		return 1;
	}
}

main(){
	Conta c1;
	Conta c2;
	
	c1.inicializa("Leticia", 180.00, 19881);
	c2.inicializa("Artur", 180.00, 98212);
	
	c2.deposita(600.00);
	c2.saque(220.00);
	c2.consulta();
	
	
	c1.deposita(600.00);
	c1.saque(220.00);
	c1.consulta();
}

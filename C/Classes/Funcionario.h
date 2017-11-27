#include <stdio.h>
#include <iostream>
using namespace std;

class Funcionario{
	string nome;
	string cpf;
	string departamento;
	float salario;
	string dataDeEntrada;
	int horasTrabalhadas;
	int telefone;
	
	public:
		void inicializa(string n, float s);
		void recebeAumento(float valor);
		void ganhoAnual();
		void consultar();
};

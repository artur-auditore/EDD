#include <iostream>
using namespace std;

class Aluno{
	public: 
		string nome;
		int idade;
		int matricula;
		
		void inserir(string n, int i);
		void consulta();
		void maisVelho(int i1, int i2);

};

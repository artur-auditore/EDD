#include <stdio.h>
#include <iostream>
using namespace std;

class Livro{
	
	string autorLivro;
	
	public:
		string nomeLivro;
		int numeroDePaginas;
		void setAutorLivro(string s){
			autorLivro = s;
		}
		string getAutorLivro(){
			return autorLivro;
		}
		
		void incluir(string s, int x);
		void consulta();
		void maior(int n1, int n2);
};

#include "Livro.h"
#include <iostream>
using namespace std;

void Livro::incluir(string s, int x){
	nomeLivro = s;
	numeroDePaginas = x;
	
	if (x<=0){
		cout<<"Livro " << s << " invalido!"<<endl;
	}
	
}

void Livro::consulta(){
	cout<<"Nome do Livro: "<<nomeLivro<<endl;
	cout<<"Numero de paginas: "<<numeroDePaginas<<endl;
	cout<<"Autor: "<<autorLivro<<endl;
	
}

void Livro::maior(int n1, int n2){
	//l1.numeroDePaginas = n1;
	//l2.numeroDePaginas = n2;
	
	if (n1 > n2){
		cout << "O maior livro tem " << n1 << " paginas" << endl;
	}else {
		cout << "O maior livro tem " << n2 << " paginas" << endl;
	}
}

main(){
	Livro l1;
	Livro l2;
	Livro l3;
	
	l1.incluir("Harry Potter e o calice de fogo", 566);
	l2.incluir("Memorias Postumas de Bras Cubas", 411);
	
	l1.setAutorLivro("J.K.Rowling");
	l2.setAutorLivro("Machado de Assis");
	
	l3.incluir("Biografia", 0);
	
	l1.consulta();
	l2.consulta();
	
	l1.maior(l1.numeroDePaginas, l2.numeroDePaginas);

}

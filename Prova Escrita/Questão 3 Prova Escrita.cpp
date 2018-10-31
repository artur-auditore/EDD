#include <stdio.h>
#include <iostream>
using namespace std;
template<class T>
class genClasse{
	public:
	char aFuncao(char a);
	
};

template<class N> char genClasse<N>::aFuncao(char a){
		return a;
	}

main(){
	genClasse<int> x;
	cout<<x.aFuncao('a');
}



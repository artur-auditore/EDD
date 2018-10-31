#include <stdio.h>
#include <iostream>
using namespace std; 
 main(){
	int a[5], *p;
	
	//Ponteiro aponta para o array
 	p=a;
 	
 	//Letra A
 	//Adicionar o valor 5
	for(int i=0;i<5;i++)
	    p[i]=5;       
	
	//Imprimir os elementos
	cout << "Elementos:" << endl;
	for(int i=0;i<5;i++)
	    cout << p[i] << " ";
	    
	cout << endl << endl;
	
	//Imprimir endereços
	cout << "Enderecos:" << endl;
	for(int i=0; i<5; i++)
		cout << p+i << " ";
	
	cout << endl << endl;
	//Letra B
	cout << "Digite valores:" << endl;
	for(int i=0; i<5; i++){
		cin >> p[i];
	}
	
	//Imprime valores pares
	cout << "Numeros pares:" << endl;
	for(int i=0; i<5; i++){
		if(p[i]%2 == 0){
			cout << p[i] << " ";
		}
	}
}

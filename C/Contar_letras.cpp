#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	string n;
	char x;
	int ct = 0;
	
	cout << "Escreva uma palavra: " << endl;
	cin >> n;
	cout << "Letra que deseja procurar: " << endl;
	cin >> x;
	
	for (int i=0; i<=n.length(); i++){
		if (n[i]== x){
			ct += 1;
		}
	}
	cout << "Ocorrencias: " << ct << endl;
}

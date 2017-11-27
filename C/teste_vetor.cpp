#include <iostream>

using namespace std;

int main(){
	
	float l[3], m=0;
	int i;
	
	for (i=0;i<3;i++){
		
		cout<<"Nota: "<<endl;
		cin>>l[i];
		m = m + l[i];
	}
	cout<<"Media das notas: "<<m/3<<endl;
	
	//Se aluno reprovado
	if (m/3<7){
		cout<<"Aluno Reprovado!";
	}else{
		cout<<"Aluno Aprovado!";
	}
}

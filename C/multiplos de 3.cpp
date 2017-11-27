#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	
	int media, l[3];
	
	for (int i=0; i<3; i++){
		cout<<"Numero: ";
		cin>>l[i];
		media= media+l[i];
	}
	cout<<"Media "<<media/3.0<<endl;
}

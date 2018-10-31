#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct PIN {   
    int* PIN;
	;	
	} ponteiro; 
	
main(){
	ponteiro w,z,x;
	x.PIN=NULL;
	x.PIN = new int();
	*x.PIN=10;
	ponteiro q=x;
	w=q;
	z=q;

  //complete:	
    cout<<"valor w: "<< *w.PIN << endl;
    cout<<"valor z: "<< *z.PIN << endl; 
    cout<<"valor x: "<< *x.PIN << endl;
    
    cout<<"endereco w: "<< w.PIN << endl;
    cout<<"endereco z: "<< z.PIN << endl;
    cout<<"endereco x: "<< x.PIN << endl;
}


#include "conta.h"

main(){
	Conta c1;
	Conta c2;
	
	c1.inicializa("Leticia", 180.00);
	c2.inicializa("Artur", 180.00);
	
	c2.deposita(600.00);
	c2.saque(220.00);
	c2.consulta();
	
	c1.deposita(600.00);
	c1.saque(220.00);
	c1.consulta();
}

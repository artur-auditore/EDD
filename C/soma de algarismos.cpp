#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	
	int n, m, c, d, u;
	
	cout<<"Numero (4 digitos): ";
	cin>>n;
	m = n/1000;
	cout<<m;
	c = (n%1000)/100;
	cout<<c;
	d = (c%10);
	cout<<d;
	u = (d%1);
	cout<<u;
	
	cout<<"Soma dos algarismos: "<<m+c+d+u<<endl;	
}

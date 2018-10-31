#include <stdio.h>
#include <iostream>
using namespace std;
class A{
	private:
		int n;
	protected:
		int m;
	public:
		int k;
};

class B: A{
	 public:
	  void a1(){
		m=3;
	}
};

class C: B{
	public:
	 void a2(){
	 	m=2;
		
	}
	string mensagem(){
		return "classe c";
	}
};

main(){
	C obj;
	cout<<obj.mensagem();
	
}


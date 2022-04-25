//3) Procure determinar quais valores são impressos ao final deste programa.
//Tente primeiro entender o código antes de colocar o programa no micro. Execute-o
//passo a passo conferindo o valor das variáveis em cada momento.
//Obs: na letra d, na função calcula tem uma condicional (if) diferente.


//a)

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;


int main(){
	int a,b,*c;
	a = 3;
	b = 4;
	
	c = &a;
	
	cout <<"O valor de c sera o mesmo de a (3): " << *c <<endl;
	
	b++;
	
	cout <<"Valor de b (4) + 1: " << b <<endl;
			
	*c = a+2;
	
	cout <<"O valor de c sera o mesmo de a (3) + 2: " << *c <<endl;
	
	cout << "a: " << a << endl << "b: "<< b;
}

//b)
#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
	int a,b,*c;
	a = 4;
	b = 3;
	c = &a;
	cout << "O valor de c sera o mesmo de a (4): " << *c << endl;
	*c = *c +1;
	
	cout << "O valor de c sera o mesmo de a (4) + 1: " << *c << endl;
	
	c = &b;
	
	cout << "O valor de c sera o mesmo de b (3): " << *c << endl;
		
	b = b+4;
	
	cout << "O valor de b sera o mesmo de b (3) + 4: " << b << endl;	
		
	cout << "a: "<< a << endl << "b: " << b << endl <<  "c :" << *c;
}

//c)

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
	int a,b,*c,*d,*f;
	a = 4;
	b = 3;
	
	c = &a;
	cout << "O valor de c sera o mesmo de a(4): " << *c << endl;
	
	d = &b;	
	cout << "O valor de d sera o mesmo de b(3): " << *d << endl;
	
	*c /= 2;
	
	cout << "O valor de c sera o mesmo de c(4)/2: " << *c << endl;
	
	
	f = c;
	cout << "O valor de f sera o mesmo de c(2): " << *f << endl;
	
	c = d;
	cout << "O valor de c sera o mesmo de d(3): " << *c << endl;
	
	d = f;
	cout << "O valor de d sera o mesmo de f(2): " << *d << endl;
	
	cout << "c: " << *c << endl << "d: " << *d;
}

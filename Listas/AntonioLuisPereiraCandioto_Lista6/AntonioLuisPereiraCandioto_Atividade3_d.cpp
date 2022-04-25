//d)

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int calcula(int);

int calcula(int x){
	int i;
	if ((x=x*2)>5) cout << "Se o valor de " << x*2 << " for maior que 5, sera retornado "<< x + 3 <<endl; return(x+3);
	for(i=0;i<10;i++){
		if (i<5) cout << "Se o valor do contador " << i << " for menor que 5, continuara. " <<endl; continue;
		if (x>8) cout << "Se o valor do contador " << i << " for maior que 8, vai parar. " <<endl; break;
		x+=2;
		cout << "Soma 2 em x a cada contagem";
	}
	return(x);
}

int main(){
	int a,b,c;
	char d;a=1;b=2;c=3;d='A';
	
	a+=b*c;
	
	cout << "O valor de a sera a(1) + b(2) * c(3): " << a << endl;
	
	d=(a>7)?d-1:d+1;
	
	cout << "O valor de a sera testado, se for maior que 7, retornara d (A) - 1, senao d (A) + 1: " << d << endl;
		
	b = calcula(b);
	
	cout << "O valor de b sera o valor de b passado na funcao: " << b << endl;
		
	c = calcula(calcula(a));
	
	cout << "O valor de c sera o valor de a passado pela funcao, tendo seu retorno passado pela funcao: " << c << endl;
		
	a = c++;
	
	cout << "O valor de a sera de c: " << a << endl;
	
	cout << "a: " << a << endl << "b: " << b << endl << "c: "<< c << endl << "d: "<< d;
}
	


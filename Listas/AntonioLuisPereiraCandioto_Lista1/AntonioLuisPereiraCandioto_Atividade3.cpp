#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//3) Ler um n�mero do teclado e imprimir todos os n�meros de 1 at� o n�mero lido. Depois, imprimir o produto dos n�meros.

using namespace std;

int i, num;
int prod = 1;

main() {
	cout <<  "Insira um numero: " << endl;
	cin >> num;
	cout << endl;
	for(i = 1;i <= num;i++){
		cout << i << endl;
		prod = prod * i;
	}
	
	cout << endl;
	cout <<  "Produto: " << endl;
	cout << prod << endl;
	
	cout << endl;
	
	system("pause");
	return(0);
}

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//3) Ler um número do teclado e imprimir todos os números de 1 até o número lido. Depois, imprimir o produto dos números.

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

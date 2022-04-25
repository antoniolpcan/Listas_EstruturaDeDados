#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

// Leia um vetor de 10 valores inteiros e exiba todos os valores ímpares.


using namespace std;

int i;
int num[10];

main() {

	cout <<  "Insira 10 valores inteiros: " << endl;
	
	for(i = 0; i < 10; i++){
	cin >> num[i];
	}
	
	
	cout <<  "Valores impares da sequencia: " << endl;
	
	for(i = 0;i < 10;i++){
		
		if (num[i] % 2 != 0) {
    	cout << num[i] << endl;
		}
	}
	
	cout << endl;
	system("pause");
	return(0);
}

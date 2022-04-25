#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//10)Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.


using namespace std;

char nome[30]; 
int i;

main() {
	cout <<  "Insira um nome: " << endl;
	
	cin.getline(nome,30);
	
	cout <<  "Resultado: " << endl;
	
	for(i = 0;i < 30;i++){
		if (nome[i]) {
			cout << nome << endl;
		}
	}
	cout << endl;
	system("pause");
	return(0);
}

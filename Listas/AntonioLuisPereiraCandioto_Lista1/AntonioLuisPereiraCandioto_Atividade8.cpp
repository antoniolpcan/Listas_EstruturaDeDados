#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//8)Receber um nome do teclado e imprimir as letras na posição par.


using namespace std;

char nome[30]; 
int i;

main() {
	cout <<  "Insira um nome: " << endl;
	
	cin.getline(nome+1,30);
	
	cout <<  "Resultado dos indices par, com indice iniciando em 1: " << endl;
	
	for(i = 1;i < 30;i++){
		if (i % 2 == 0) {
			cout << nome[i];
		}
	}
	
	cout << endl;
	system("pause");
	return(0);
}

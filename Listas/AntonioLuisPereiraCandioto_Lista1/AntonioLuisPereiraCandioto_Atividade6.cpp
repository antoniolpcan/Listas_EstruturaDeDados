#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//6) Receber um nome do teclado e imprimir as 4 primeiras letras do nome.


using namespace std;

char nome[30]; 
int i;

main() {
	cout <<  "Insira um nome: " << endl;
	
	cin.getline(nome,30);
	
	cout <<  "Resultado: " << endl;
	
	for(i = 0;i < 4;i++){
		cout << nome[i];
	}
	
	cout << endl;
	system("pause");
	return(0);
}

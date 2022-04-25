#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//9)Digite um nome do teclado, calcule e mostre quantas letras tem.


using namespace std;

char nome[30]; 
int i;
int num = 0;

main() {
	cout <<  "Insira um nome: " << endl;
	
	cin.getline(nome,30);
	
	cout <<  "Resultado: " << endl;
	
	for(i = 0;i < 30;i++){
		if (nome[i] and nome[i] != ' ') {
			num = num + 1;
		}
	}
	cout << num;
	cout << endl;
	system("pause");
	return(0);
}

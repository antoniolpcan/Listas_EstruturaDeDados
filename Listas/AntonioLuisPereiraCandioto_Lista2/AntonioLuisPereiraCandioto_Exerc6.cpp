
//6) Usando a função strcat (procure na internet o que significa e como utilizar) faça um programa
//para concatenar duas strings que foram lidas do teclado (seu nome e sobrenome).


#include <iostream>
#include <cstdlib>
#include <locale>
#include <string.h>

using namespace std;

char nome[10],sobrenome[10];

main() {
	setlocale(LC_ALL,"Portuguese");
	cout <<  "Insira seu nome: ";
	cin >> nome;
	cout <<  "Insira seu sobrenome: ";
	cin >> sobrenome;
	
	strcat (nome, sobrenome);
	
	cout << nome << endl;
	system("pause");
	return(0);
}

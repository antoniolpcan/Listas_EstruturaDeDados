//5) Usando a fun��o strcpy (procure na internet o que significa e como utilizar) fa�a um programa
//que leia o seu nome do teclado, armazene em uma vari�vel, depois utilize strcpy e depois
//printa na tela uma outra vari�vel com o seu nome.

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>

using namespace std;

char nome[10];
char armazenador[10];

main() {
	setlocale(LC_ALL,"Portuguese");
	cout <<  "Insira seu nome: " << endl;
	cin >> nome;
	
	strcpy(armazenador, nome);
	
	
	cout <<  "Seu nome: " << armazenador << endl;
	
	cout << endl;
	system("pause");
	return(0);
}

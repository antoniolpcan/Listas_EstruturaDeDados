//5) Usando a função strcpy (procure na internet o que significa e como utilizar) faça um programa
//que leia o seu nome do teclado, armazene em uma variável, depois utilize strcpy e depois
//printa na tela uma outra variável com o seu nome.

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

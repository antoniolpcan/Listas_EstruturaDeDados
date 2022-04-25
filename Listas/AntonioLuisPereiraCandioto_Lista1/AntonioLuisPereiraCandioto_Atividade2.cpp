#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//Faça um programa que pegue um nome até 20 caracteres do teclado e depois escreva-o na
//tela de trás pra frente.

using namespace std;

char nome[20]; 
int i;

main() {
	cout <<  "Insira um nome: " << endl;
	
	cin.getline(nome,20);
	
	cout <<  "Resultado: " << endl;
	
	for(i = 19;i >= 0;i--){
		cout << nome[i];
	}
	
	cout << endl;
	system("pause");
	return(0);
}

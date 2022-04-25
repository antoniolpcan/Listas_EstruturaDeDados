#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//Faça um programa que receba do usuário dez temperaturas em graus Fahrenheit,transforme-as em graus Celsius e armazene os resultados em um vetor. 
//Terminada a entradade dados, os valores armazenados devem ser exibidos. Obs.: A fórmula é C = 5/9 (F – 32).

using namespace std;

int i;
float vetf[10];
float vetc[10];

main() {
	
	cout <<  "Insira dez temperaturas em graus Fahrenheit: " << endl;
	
	for(i = 0; i < 10; i++){
	cin >> vetf[i];
	}
	
	for(i = 0;i < 10;i++){
	vetc[i] = (vetf[i] - 32)/1.8;
	}
	
	
	cout << endl;
	cout <<  "Lista de temperaturas em graus Celsius: " << endl;
	
	for(i = 0;i < 10;i++){
		cout << vetc[i] << endl;
	}
	
	cout << endl;
	system("pause");
	return(0);
}

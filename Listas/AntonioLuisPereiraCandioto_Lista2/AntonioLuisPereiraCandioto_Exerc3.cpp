//3)Escrever um programa, que leia valores inteiros at� ser lido o valor -50. 
//Quando isso acontecer o programa dever� escrever a soma e a m�dia dos valores lidos


#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>


using namespace std;

float valor = 0,media;
float soma = 0;
int i = 0;

main() {
	
	while(valor != -50){
	cout <<  "Insira um numero: " << endl;
	cin >> valor; 
	i = i + 1;
	soma = valor + soma;
	}
	
	media = soma/i;
	
	cout <<  "Soma: " << soma << endl;
	cout <<  "Media: " << media << endl;
	
	cout << endl;
	system("pause");
	return(0);
}

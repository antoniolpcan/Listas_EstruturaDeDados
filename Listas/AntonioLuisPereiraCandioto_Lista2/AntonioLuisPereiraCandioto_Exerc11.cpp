//11)Fa�a um programa que leia do teclado 10 n�meros inteiros e armazene em um vetor. 
//Sem ordenar, determine o maior e o menor n�mero e imprima-os na tela.


#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <locale>

using namespace std;

int aux;
int i,x;
int nummai[10];
int nummen[10];


main() {
	setlocale(LC_ALL,"Portuguese");
	for(i = 0;i < 10;i++){
	cout <<  "Insira um numero: " << endl;
	cin >> nummai[i];
	}

	for (i=0; i <10; i++){
		nummen[i] = nummai[i];
	}
	
	for (i=0; i <10; i++){
		for (x=0;x<10-i-1;x++){
			if (nummai[x]<nummai[x+1]){
				aux = nummai[x];
				nummai[x] = nummai[x + 1];
				nummai[x+1] = aux;
			}		
		}	
	}
	
	
	for (i=0; i <10; i++){
		for (x=0;x<10-i-1;x++){
			if (nummen[x]>nummen[x+1]){
				aux = nummen[x];
				nummen[x] = nummen[x + 1];
				nummen[x+1] = aux;
			}		
		}	
	}
	
	
	cout << "Maior n�mero: " << nummai[0] << endl;
	cout << "Menor n�mero: " << nummen[0] << endl;
	
	
	cout << endl;
	system("pause");
	return(0);
}

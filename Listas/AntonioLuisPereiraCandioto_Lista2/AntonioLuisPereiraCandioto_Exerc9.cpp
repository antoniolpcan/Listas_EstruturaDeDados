//9)Faça um programa que leia do teclado 10 números e armazene em um vetor. 
//Depois ordene o vetor de forma crescente. Após isso imprima esse vetor.

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <locale>

using namespace std;

int aux;
int i,x;
int num[10];


main() {
	setlocale(LC_ALL,"Portuguese");
	for(i = 0;i < 10;i++){
	cout <<  "Insira um numero: " << endl;
	cin >> num[i];
	}
	
	for (i=0; i <10; i++){
		for (x=0;x<10-i-1;x++){
			if (num[x]>num[x+1]){
				aux = num[x];
				num[x] = num[x + 1];
				num[x+1] = aux;
			}		
		}	
	}
	
	
	cout << "Resultado ordenado de forma crescente:" << endl;
	for (i = 0; i < 10; i ++){
		cout << num[i] << " ";
	}

	
	cout << endl;
	system("pause");
	return(0);
}

//10) Crie um programa que leia do teclado uma sequ�ncia de 10 n�meros e armazene em um vetor.
//Depois disso, ordene os n�meros de forma crescente. Por �ltimo, exiba o vetor. Fa�a todo o exercicio
//usando somente ponteiro.


#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int aux;
	int i,x;
	int tam = 10;
	double *vetores[tam],num[tam];


	for(i = 0;i < tam;i++){
	cout <<  "Insira um numero: " << endl;
	cin >> num[i];
	vetores[i] = &num[i];
	}
	
	for (i=0; i <tam; i++){
		for (x=0;x<tam-i-1;x++){
			if (*vetores[x]>*vetores[x+1]){
				aux = *vetores[x];
				*vetores[x] = *vetores[x + 1];
				*vetores[x+1] = aux;
			}		
		}	
	}
	
	
	cout << "Resultado ordenado de forma crescente:" << endl;
	for (i = 0; i < tam; i ++){
		cout << num[i] << " ";
	}

}

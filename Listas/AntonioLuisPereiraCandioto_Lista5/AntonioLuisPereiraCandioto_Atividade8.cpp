//8) Crie um programa que leia 9 valores inteiros do usuário. Esses valores devem ser variados, podendo
//ser repetidos.
//a) Use ponteiro para popular o vetor.
//b) Ordene o vetor de forma crescente (use bubble sort)
//c) Crie uma matriz 3x3 e popule essa matriz com os valores do vetor, usando ponteiro.
//d) Exiba cada elemento do vetor e da matriz, usando ponteiro.

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int aux;
	int i,x;
	int ni = 0;
	int tam = 9,tammat = 3;
	int *vetores[tam],*matr[tammat][tammat],num[tam];

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
	
	for (i=0; i <tammat; i++){
		for (x=0; x <tammat; x++){
			matr[i][x] = &num[ni++];
		}
	}
	
	
	cout << "Resultado do vetor:" << endl;
	for (i = 0; i < tam; i ++){
		cout << num[i] << " ";
	}
	
	cout << endl << "Resultado da matriz:" << endl;
	for (i=0; i <tammat; i++){
		for (x=0; x <tammat; x++){
			cout << *matr[i][x] << " ";
		}
	}

}

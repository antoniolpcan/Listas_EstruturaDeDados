//2)Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4 e imprimir os elementos da diagonal principal.



#include <iostream>
#include <cstdlib>

using namespace std;
int i,n,valor;
int vet[4][4];

int main(){
	
	for(i=0;i<4;i++){
		for(n=0;n<4;n++){
			cin >> vet[i][n];
		}
	}
	
	
	cout << endl << "Resultado: " << endl;
	for(i=0;i<4;i++){
		cout << vet[i][i] <<endl;		
	}
}

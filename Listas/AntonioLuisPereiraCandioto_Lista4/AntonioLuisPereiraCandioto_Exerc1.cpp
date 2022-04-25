//1)Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e imprimir outra matriz multiplicando cada elemento da primeira matriz por 2.


#include <iostream>
#include <cstdlib>

using namespace std;

int i,n,valor;
int vet[3][3];
int mt[3][3];

int main(){
	
	for(i=0;i<3;i++){
		for(n=0;n<3;n++){
			cin >> vet[i][n];
		}
	}
	
	
	cout << endl << "Resultado: " << endl;
	for(i=0;i<3;i++){
		for(n=0;n<3;n++){
			mt[i][n] = vet[i][n] * 2;
			cout << vet[i][n] << " x " << 2 << " = " << mt[i][n] <<endl;		
		}
	}
}

//3)Crie um programa que recebe uma matriz de inteiros positivos e substitui seus elementos de valor ímpar por -1 e os pares por +1.



#include <iostream>
#include <cstdlib>

using namespace std;
int i,n,valor;
int vet[3][3];
int new_vet[3][3];
float resto;

int main(){
	
	for(i=0;i<3;i++){
		for(n=0;n<3;n++){
			
			cout << "Digite um número: " << endl;
			cin >> vet[i][n];
			resto = vet[i][n] % 2;
			
			if(resto == 0){
				new_vet[i][n] = 1;
			}
			else{
				new_vet[i][n] = -1;
			}
			cout << endl;
		}
	}
	
	
	cout << endl << "Resultado: " << endl;
	for(i=0;i<3;i++){
		for(n=0;n<3;n++){
			
			cout <<  vet[3][3] << " ----> " << new_vet[i][n] <<endl;	
		}
	}
}

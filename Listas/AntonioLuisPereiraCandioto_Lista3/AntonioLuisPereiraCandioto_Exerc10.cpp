//10.Crie um programa que tenha uma função que receba um vetor de inteiros e um numero. Essa
//função deve fazer a busca de número nesse vetor e retornar o valor 1 caso encontre e 0 caso não
//encontre esse número no vetor. Se encontrar deve exibir o valor encontrado e se não encontrar
//apenas exibir mensagem de “Valor não encontrado”.


#include <iostream>
#include <cstdlib>
#include <locale>
#include <string.h>

using namespace std;

int vet[10];
float num;
int r = 0;

int verify(int,float);

int verify(int vet[],float num){
	for (int i=0;i<10;i++){
		if(num == vet[i]){
			r = 1;
			return r;
		}
	}
	if (r == 0){
		return r;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for (int i=0;i<10;i++){
	cout << "Digite um valor para o vetor: ";
	cin >> vet[i];		
	}
	
	cout << endl << "Digite um valor para a checagem: ";
	cin >> num;	
	
	
	int result = verify(vet,num);
	
	if (result == 1){
		cout << num << " encontrado no vetor." << endl;
	}
	if (result == 0){
		cout << "Valor não encontrado." << endl;
	}
}

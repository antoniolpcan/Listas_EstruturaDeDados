//6. Criar uma função que retorna o seguinte: A função recebe 3 valores float (n1,N2,n3)e retornaro (x^2/y^3)+y^z. 
//Vai retornar o tipo inteiro, ou seja, tem que fazer um cast do valor (procurar cast de float para inteiro na internet).

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

float vet[2];

//cabeçalho

float calc(float);


int calc(float vet[]){
	int v = (pow(vet[0],2)/pow(vet[1],3)) + pow(vet[1],vet[2]);
	return (int)v;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	for (int i = 0;i<3;i++){
		cout << "Digite um valor: ";
		cin >> vet[i];
	}
	
	int val = calc(vet);
	
	cout << "Resultado: " << val;
	
}

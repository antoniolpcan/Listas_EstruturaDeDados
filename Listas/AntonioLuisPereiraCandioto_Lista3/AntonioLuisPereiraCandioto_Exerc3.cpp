//3. Faça um programa que apresente a série de Fibonacci até o décimo quinto termo. A função deve
//receber esse termo e retornar o valor desse termo após a série de Fibonacci. A série é formada
//pela sequência: 1,1,2,3,5,8,13,21,34,....,etc.

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <locale>

using namespace std;

int vet[14];
int val = 0;
int i;

//cabeçalho

int calc_fib(int);


int calc_fib(int vet[]){
	vet[0] = 1;
	vet[1] = 1;
	cout << vet[0] << endl;
	cout << vet[1] << endl;
	for (i=2;i<15;i++){
		vet[i] = vet[i-1] + vet[i-2];
		cout << vet[i]<< endl;
	}
	return vet[14];
	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ultvalor = calc_fib(vet);
	cout << endl << "O décimo quinto termo da série é: " << ultvalor;
}






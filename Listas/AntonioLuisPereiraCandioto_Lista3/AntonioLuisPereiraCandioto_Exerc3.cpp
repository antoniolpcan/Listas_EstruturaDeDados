//3. Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. A fun��o deve
//receber esse termo e retornar o valor desse termo ap�s a s�rie de Fibonacci. A s�rie � formada
//pela sequ�ncia: 1,1,2,3,5,8,13,21,34,....,etc.

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <locale>

using namespace std;

int vet[14];
int val = 0;
int i;

//cabe�alho

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
	cout << endl << "O d�cimo quinto termo da s�rie �: " << ultvalor;
}






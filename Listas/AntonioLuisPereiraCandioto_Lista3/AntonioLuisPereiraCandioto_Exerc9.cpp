//9. Crie um programa que tenha uma função que receba um inteiro e verifique se é par ou impar. A
//mensagem de “É par” ou “É impar” deve ser exibida na própria função, ou seja, a função em si não
//deve retornar nada.

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int val;

//cabeçalho

int verify(int);


int verify(int val){
	if(val % 2 == 0){
		cout << val << " é par.";
	}
	else{
		cout << val << " é impar.";
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Digite um valor: ";
	cin >> val;
	
	verify(val);
}

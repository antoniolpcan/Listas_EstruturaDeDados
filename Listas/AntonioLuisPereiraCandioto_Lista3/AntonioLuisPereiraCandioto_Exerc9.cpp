//9. Crie um programa que tenha uma fun��o que receba um inteiro e verifique se � par ou impar. A
//mensagem de �� par� ou �� impar� deve ser exibida na pr�pria fun��o, ou seja, a fun��o em si n�o
//deve retornar nada.

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int val;

//cabe�alho

int verify(int);


int verify(int val){
	if(val % 2 == 0){
		cout << val << " � par.";
	}
	else{
		cout << val << " � impar.";
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Digite um valor: ";
	cin >> val;
	
	verify(val);
}

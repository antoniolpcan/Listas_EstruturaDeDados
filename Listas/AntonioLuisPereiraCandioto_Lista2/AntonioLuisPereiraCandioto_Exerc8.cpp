//8)Usando a fun��o strcmp(procure na internet o que significa e como utilizar) 
//fa�a um programa que leia o seu nome e sobrenome em 2 vari�veis diferentes. 
//Verifique se as strings s�o iguais ou diferentes e imprima na tela uma mensagem 
//dizendo se uma � maior que a outra ou se s�o iguais. Utilize IF-ELSE e strcmp.

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>

using namespace std;

char nome[30],sobrenome[30];

int main(){
	setlocale(LC_ALL,"Portuguese");
	cout << "Digite seu nome: ";
	cin >> nome;
	
	cout << "Digite seu sobrenome: ";
	cin >> sobrenome;
	
	int tamnome = strlen(nome);
	int tamsobrenome = strlen(sobrenome);
	
	int comp = strcmp(nome, sobrenome);
	
	
	if (comp == 0){
		cout << "As strings s�o iguais "; 
	}
	else{
		cout << "As strings s�o diferentes ";
	}
	
	if (tamnome > tamsobrenome){
		cout << "e o nome � maior que o sobrenome" << endl;
	}
	
	else if (tamnome < tamsobrenome){
		cout << "e o nome � menor que o sobrenome" << endl;
	}
	
	else if (tamnome == tamsobrenome){
		cout << "e ambas possuem o mesmo tamanho." << endl;
	}
	
	
}

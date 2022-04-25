//8)Usando a função strcmp(procure na internet o que significa e como utilizar) 
//faça um programa que leia o seu nome e sobrenome em 2 variáveis diferentes. 
//Verifique se as strings são iguais ou diferentes e imprima na tela uma mensagem 
//dizendo se uma é maior que a outra ou se são iguais. Utilize IF-ELSE e strcmp.

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
		cout << "As strings são iguais "; 
	}
	else{
		cout << "As strings são diferentes ";
	}
	
	if (tamnome > tamsobrenome){
		cout << "e o nome é maior que o sobrenome" << endl;
	}
	
	else if (tamnome < tamsobrenome){
		cout << "e o nome é menor que o sobrenome" << endl;
	}
	
	else if (tamnome == tamsobrenome){
		cout << "e ambas possuem o mesmo tamanho." << endl;
	}
	
	
}

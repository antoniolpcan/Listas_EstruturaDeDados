//8. Criar um programa que receba dois arrays de char (string), sendo um nome e outro o sobrenome.
//Essa fun��o deve retornar o tamanho do nome completo dessa pessoa, ou seja, j� concatenados
//(usar strcat e strlen).


#include <iostream>
#include <cstdlib>
#include <locale>
#include <string.h>

using namespace std;

char nome[100];
char sobrenome[100];

//cabe�alho

char concatname(char,char);


char concatname(char *nome, char *sobrenome){
	strcat (nome, sobrenome);
	return strlen(nome);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout <<  "Insira seu nome: ";
	cin >> nome;
	
	cout <<  "Insira seu sobrenome: ";
	cin >> sobrenome;
	
	int nomecomplen = concatname(nome,sobrenome);
	
	cout << "O tamanho do nome completo �: "<< nomecomplen << endl;
	
}

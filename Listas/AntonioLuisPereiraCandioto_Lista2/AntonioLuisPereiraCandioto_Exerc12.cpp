//12)Ler do teclado o nome, sexo e idade do usuário. Se sexo for feminino e idade menor que 25
//imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA.

#include <iostream>
#include <stdio.h>
#include <locale>
#include <cstring>

using namespace std;

char nome[30];
char sexo;
int idade;

main() {
	setlocale(LC_ALL,"Portuguese");
	
	cout <<  "Insira seu nome: ";
	cin >> nome;
	
	cout <<  "Insira seu sexo, sendo 'F' para feminino e 'M' para masculino: ";
	cin >> sexo;
	
	cout <<  "Insira sua idade: ";
	cin >> idade;

	
	if(sexo == 'F' && idade < 25){
		cout << nome << " foi aceita: " << endl;
	}
	else{
		cout << nome << " não foi aceito(a): " << endl;
	}
	
	cout << endl;
	system("pause");
	return(0);
}

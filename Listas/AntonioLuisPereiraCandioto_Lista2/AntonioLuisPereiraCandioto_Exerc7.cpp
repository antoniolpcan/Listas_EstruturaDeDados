//7)Usando a função strlen(procure na internet o que significa e como utilizar) faça um programa
//que leia o seu nome e sobrenome em 2 variáveis diferentes e 
//imprima o numero de caracteres de cada uma delas.

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>

using namespace std;

char nome[30],sobrenome[30]; 
int x;

main() {
	setlocale(LC_ALL,"Portuguese");
	cout <<  "Insira um nome: " << endl;
	cin >> nome;
	
	cout <<  "Insira seu sobrenome: " << endl;
	cin >> sobrenome;
	
	int num_nome = strlen(nome);
	int num_sobrenome = strlen(sobrenome);
	
	cout << "O nome '" << nome << "' possui " << num_nome << " caracteres."<< endl;
	
	cout << "O sobrenome '" << sobrenome << "' possui " << num_sobrenome << " caracteres."<< endl;
	
	cout << endl;
	system("pause");
	return(0);
}

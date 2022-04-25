//5)Utilizando o tipo de dado enum e switch,
//crie um programa que recebe um valor numérico do usuário, de 1 até 7, 
//e diga que dia da semana é. Por exemplo, domingo é 1, segunda é 2, 
//terça é 3... Diga que ele digitou um valor errado também, caso o faça.

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	
	enum meses_do_ano{
		Domingo = 1,
		Segunda,
		Terca,
		Quarta,
		Quinta,
		Sexta,
		Sabado
	};
	
	cout << "Digite um valor de 1 até 7 : "<< endl;
	cin >> valor;


	switch(valor)
		{
			case Domingo:
				cout << "É Domingo" << endl;
				break;
				
			case Segunda:
				cout << "É Segunda" << endl;
				break;
				
			case Terca:
				cout << "É Terça" << endl;
				break;
				
			case Quarta:
				cout << "É Quarta" << endl;
				break;
				
			case Quinta:
				cout << "É Quinta" << endl;
				break;
				
			case Sexta:
				cout << "É Sexta" << endl;
				break;
				
			case Sabado:
				cout << "É Domingo" << endl;
				break;
				
			default:
				cout << "Valor inválido." << endl;
				break;
				
		}	
		
}

//5)Utilizando o tipo de dado enum e switch,
//crie um programa que recebe um valor num�rico do usu�rio, de 1 at� 7, 
//e diga que dia da semana �. Por exemplo, domingo � 1, segunda � 2, 
//ter�a � 3... Diga que ele digitou um valor errado tamb�m, caso o fa�a.

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
	
	cout << "Digite um valor de 1 at� 7 : "<< endl;
	cin >> valor;


	switch(valor)
		{
			case Domingo:
				cout << "� Domingo" << endl;
				break;
				
			case Segunda:
				cout << "� Segunda" << endl;
				break;
				
			case Terca:
				cout << "� Ter�a" << endl;
				break;
				
			case Quarta:
				cout << "� Quarta" << endl;
				break;
				
			case Quinta:
				cout << "� Quinta" << endl;
				break;
				
			case Sexta:
				cout << "� Sexta" << endl;
				break;
				
			case Sabado:
				cout << "� Domingo" << endl;
				break;
				
			default:
				cout << "Valor inv�lido." << endl;
				break;
				
		}	
		
}

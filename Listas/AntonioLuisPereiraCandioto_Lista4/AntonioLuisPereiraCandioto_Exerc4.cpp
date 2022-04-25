//4)Utilizando o switch-case use as letras a, b, c e q de quit (podendo ser maiúsculo ou minúsculo, para isso procure na internet por case acumulado) 
//para criar um cardápio de restaurante com 3 itens: entrada, prato principal e sobremesa. Dentro de cada item apenas exiba na tela o que terá em cada um dos pratos.

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){	
	setlocale(LC_ALL, "Portuguese");

	char valor;
	int i = 0;
	
	while (i != 1){
	
		cout << endl;
		cout << "------ Cardápio ------" << endl;
		cout << "a - Entrada" << endl;
		cout << "b - Prato principal" << endl;
		cout << "c - Sobremesa" << endl;
		cout << "q - Sair" << endl;
		cout << "----------------------"  << endl;
		cout << endl;
		
		cin >> valor;
		
		switch(valor)
		{
			case 'a':
			case 'A':
				cout << "Entrada: Tabua de Queijos.";
				cout << endl;
				break;
				
			case 'b':
			case 'B':
				cout << "Prato principal: Strogonoff de frango.";
				cout << endl;
				break;
				
			case 'c':
			case 'C':
				cout << "Sobremesa: Pudim de leite condensado.";
				cout << endl;
				break;
				
			case 'q':
			case 'Q':
				cout << "Você saiu..." << endl;
				i = i + 1;
				break;
				
			default:
				cout << "Opção inválida." << endl;
				break;
				
		}	
	}
}

//6)Criar um menu simples, de um sistema banc�rio.
//Vamos exibir alguns couts com as op��es:
//1. Saque
//2. Extrato
//3. Transfer�ncia
//4. Dep�sito.

//Em cada case do switch, dizemos que op��o ela escolheu.
//Caso a pessoa digite qualquer coisa que n�o seja essa op��o, cai no default que avisa que a op��o � inv�lida.

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){	
	setlocale(LC_ALL, "Portuguese");

	int valor;
	
	
	cout << endl;
	cout << "------ Card�pio ------" << endl;
	cout << "1. Saque" << endl;
	cout << "2. Extrato" << endl;
	cout << "3. Transfer�ncia" << endl;
	cout << "4. Dep�sito." << endl;
	cout << "----------------------"  << endl;
	cout << endl;
	
	cin >> valor;
	
	switch(valor)
	{
		case 1:
			cout << "Voc� escolheu saque.";
			cout << endl;
			break;
			
		case 2:
			cout << "Voc� escolheu extrato.";
			cout << endl;
			break;
			
		case 3:
			cout << "Voc� escolheu transfer�ncia.";
			cout << endl;
			break;
			
		case 4:
			cout << "Voc� escolheu dep�sito" << endl;
			cout << endl;
			break;
			
		default:
			cout << "Op��o inv�lida." << endl;
			break;
			
		
	}
}

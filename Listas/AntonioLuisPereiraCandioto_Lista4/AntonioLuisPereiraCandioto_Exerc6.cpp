//6)Criar um menu simples, de um sistema bancário.
//Vamos exibir alguns couts com as opções:
//1. Saque
//2. Extrato
//3. Transferência
//4. Depósito.

//Em cada case do switch, dizemos que opção ela escolheu.
//Caso a pessoa digite qualquer coisa que não seja essa opção, cai no default que avisa que a opção é inválida.

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){	
	setlocale(LC_ALL, "Portuguese");

	int valor;
	
	
	cout << endl;
	cout << "------ Cardápio ------" << endl;
	cout << "1. Saque" << endl;
	cout << "2. Extrato" << endl;
	cout << "3. Transferência" << endl;
	cout << "4. Depósito." << endl;
	cout << "----------------------"  << endl;
	cout << endl;
	
	cin >> valor;
	
	switch(valor)
	{
		case 1:
			cout << "Você escolheu saque.";
			cout << endl;
			break;
			
		case 2:
			cout << "Você escolheu extrato.";
			cout << endl;
			break;
			
		case 3:
			cout << "Você escolheu transferência.";
			cout << endl;
			break;
			
		case 4:
			cout << "Você escolheu depósito" << endl;
			cout << endl;
			break;
			
		default:
			cout << "Opção inválida." << endl;
			break;
			
		
	}
}

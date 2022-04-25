//4) Crie um jogo onde o computador sorteia um n�mero de 1 at� 10, e voc� tenta
//adivinhar qual � o n�mero. Use fun��o que fa�a esse sorteio aleat�rio. Procure na
//internet por Rand, Srand e Random.

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	int tentativa;
	int valor_random;
	
	setlocale(LC_ALL,"Portuguese");
	
	cout << "=====================================" <<endl;	
	cout << "= Bem vindo ao jogo de adivinha��o! =" <<endl;
	cout << "=====================================" <<endl;
	cout << "Adivinhe o n�mero de 1 a 10: " <<endl;
	
	cin >> tentativa;
	
	srand (time(NULL));
	valor_random = rand() % 11;
	
	if (tentativa == valor_random){
		cout << endl << "O n�mero gerado foi: '" << valor_random << "' e voc� digitou: '" << tentativa <<"'."<< endl; 
		cout << endl << "   Parab�ns! Voc� acertou!" << endl;
	}
	else{
		cout << endl << "O n�mero gerado foi: '" << valor_random << "' e voc� digitou: '" << tentativa <<"'."<< endl; 
		cout << "=================================" <<endl;
		cout << endl << "   Infelizmente, voc� errou!" << endl;		
	}
	cout << endl;
	cout << "=================================" <<endl;
	cout << "=         Fim de jogo !         =" <<endl;
	cout << "=================================" <<endl;
	
}

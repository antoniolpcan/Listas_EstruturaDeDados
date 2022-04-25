//4) Crie um jogo onde o computador sorteia um número de 1 até 10, e você tenta
//adivinhar qual é o número. Use função que faça esse sorteio aleatório. Procure na
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
	cout << "= Bem vindo ao jogo de adivinhação! =" <<endl;
	cout << "=====================================" <<endl;
	cout << "Adivinhe o número de 1 a 10: " <<endl;
	
	cin >> tentativa;
	
	srand (time(NULL));
	valor_random = rand() % 11;
	
	if (tentativa == valor_random){
		cout << endl << "O número gerado foi: '" << valor_random << "' e você digitou: '" << tentativa <<"'."<< endl; 
		cout << endl << "   Parabéns! Você acertou!" << endl;
	}
	else{
		cout << endl << "O número gerado foi: '" << valor_random << "' e você digitou: '" << tentativa <<"'."<< endl; 
		cout << "=================================" <<endl;
		cout << endl << "   Infelizmente, você errou!" << endl;		
	}
	cout << endl;
	cout << "=================================" <<endl;
	cout << "=         Fim de jogo !         =" <<endl;
	cout << "=================================" <<endl;
	
}

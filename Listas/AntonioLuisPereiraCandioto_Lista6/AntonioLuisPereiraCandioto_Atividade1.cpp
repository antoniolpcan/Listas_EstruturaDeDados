//1) Fazer um programa que recebe uma string do teclado e passa esse array para uma
//função. Essa função deve retornar o valor 1 se o string digitado foi "SIM" e 0 se o string
//digitado foi "NAO". A rotina só deve retornar alguma coisa se o string digitado for "SIM"
//ou "NAO", então faça o tratamento disso.

#include <iostream>
#include <locale>
#include <cstdlib>
#include <cstring>

using namespace std;


int validar (char *resposta);

int validar (char *resposta){
	int positivo = 2;
	int negativo = 2;
	
	positivo = strcmp(resposta,"SIM");
	negativo = strcmp(resposta,"NAO");
	
	if (positivo == 0 ){
		return 1;
	}
	if (negativo == 0){
		return 0;
	}
	else{
		return 2;
	}
	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	char resposta[3];
	cout << "Digite 'SIM' ou 'NAO':" << endl;
	cin.getline(resposta, 4);
	
	int resp = 2;
	
	resp = validar(resposta);
	
	if (resp == 1){
		cout << "Foi digitado: 'SIM'." << endl;
	}
	if (resp == 0){
		cout << "Foi digitado: 'NAO'." << endl;
	}
	
}

//1. Calcule em uma fun��o separada o valor do volume de uma lata de �leo, utilizando a f�rmula
//abaixo, mas utilizando fun��o que receba o raio e a altura como par�metros de entrada e o
//retorno seria o volume da lata.
//		VOLUME = 3.14159 * R2 * ALTURA , onde R � o raio da base

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float raio,altura;

//cabe�alho

float calc_vol(float , float);


float calc_vol(float raio,float altura){
	float vol = 3.14159 * pow(raio,2) * altura;
	return vol;
}

int main(){
	
	cout << "Digite o valor do raio: ";
	cin >> raio;
	cout << "Digite o valor da altura: ";	
	cin >> altura;
		
	float volum = calc_vol(raio,altura);
	
	
	cout << "Valor do volume da lata: " << volum;
	
	
	
}

//1. Calcule em uma função separada o valor do volume de uma lata de óleo, utilizando a fórmula
//abaixo, mas utilizando função que receba o raio e a altura como parâmetros de entrada e o
//retorno seria o volume da lata.
//		VOLUME = 3.14159 * R2 * ALTURA , onde R é o raio da base

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float raio,altura;

//cabeçalho

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

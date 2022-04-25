//2. Faça um programa que leia uma temperatura em graus Celsius e apresente-a convertida em
//graus Fahrenheit. Fazer isso usando função, onde receba o valor em graus Celsius e retorne o
//valor em Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5, onde F é a temperatura em
//Fahrenheit e C em graus Centígrados.


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float c;

//cabeçalho

float calc_temp(float);


float calc_temp(float c){
	float f = (9 * c + 160) / 5;
	return f;
}

int main(){
	
	cout << "Digite o valor da temperatura em graus Celsius: ";
	cin >> c;
		
	float fahren = calc_temp(c);
	
	cout << "Valor da temperatura em graus Fahrenheit: " << fahren;
	
}


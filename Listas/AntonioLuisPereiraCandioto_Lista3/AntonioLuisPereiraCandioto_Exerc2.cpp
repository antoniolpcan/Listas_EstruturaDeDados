//2. Fa�a um programa que leia uma temperatura em graus Celsius e apresente-a convertida em
//graus Fahrenheit. Fazer isso usando fun��o, onde receba o valor em graus Celsius e retorne o
//valor em Fahrenheit. A f�rmula de convers�o �: F = (9 * C + 160) / 5, onde F � a temperatura em
//Fahrenheit e C em graus Cent�grados.


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float c;

//cabe�alho

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


//7)Faça um programa que recebe os três lados de um triângulo e diz se é equilátero, isósceles ouescaleno. 
//Para isso, crie uma função que tenha como parâmetro os três lados do triângulo e exiba natela qual o tipo do triângulo.  
//Faça o teste para verificar se os 3 lados formam mesmo um triângulo.
//https://mundoeducacao.uol.com.br/matematica/classificacao-triangulos.htmhttps://www.preparaenem.com/matematica/condicao-existencia-um-triangulo.htm


#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

float calc_triang(float,float,float);

float calc_triang(float a, float b, float c){	

	if (a < (b + c) and b < (a + c) and c < (a + b) and (a != 0 and b != 0 and c != 0)){
		
		if(a == b and b == c and a == c){
			cout << endl << "É um triangulo equilatero.";
		}
		
		if((a == b  and b != c) or (c == a  and b != c) or (a != b  and b == c)){
			cout << endl << "É um triangulo isósceles.";
		}
		
		if(a != b  and b != c and a != c){
			cout << endl << "É um triangulo escaleno.";
		}
		
	}
	
	else{
		cout << endl << "Não é um triângulo...";
	}
	
}

main(){
	setlocale(LC_ALL, "Portuguese");
	float a,b,c;
	
	cout << "Digite o valor de a: " << endl;
	cin >> a;
	
	cout << "Digite o valor de b: " << endl;
	cin >> b;
	
	cout << "Digite o valor de c: " << endl;
	cin >> c;
	
	calc_triang(a, b, c);
	
}


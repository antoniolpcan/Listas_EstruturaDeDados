//8)Faça um programa que calcule a fórmula de Bháskara. 
//Para isso, crie uma função que tenha como parâmetro de entrada os 
//3 valores a, b e c e retorne o valor da soma das raízes. 
//Para que a fórmula de Bháskara seja completa, todas as variáveis devem ser diferente de zero (faça o teste de verificação).
//Dica: use a função sqrt da biblioteca cmath.https://www.educamaisbrasil.com.br/enem/matematica/formula-de-bhaskara

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

float calc_bask(float,float,float);

float calc_bask(float a, float b, float c){	

	if (a != 0 and b != 0 and c != 0){
		
		float delta;
		
		delta = (b*b) - (4*a*c);
		
		if (delta>0){
			
			float raiz1 = (-b - sqrt(delta))/(2*a);
	        float raiz2 = (-b + sqrt(delta))/(2*a);
	        
	        float soma_raizs = raiz1 + raiz2;
	        return soma_raizs;
	        
		}
		
		else{
			cout << "Delta negativo...";
			return 0;
		}	
	}
	
	else{
		cout << "Os valores devem ser diferentes de 0...";
		return 0;
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
	
	float result = calc_bask(a, b, c);
	
	if (result != 0){
		cout << "O resultado é: " << result << endl;
	}
	
}

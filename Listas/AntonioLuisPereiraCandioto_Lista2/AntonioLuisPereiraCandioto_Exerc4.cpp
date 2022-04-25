//4)Receba do teclado 10 números e armazene eles em um vetor. 
//Depois faça os seguintesprocedimentos armazenando os valores em outros 3 vetores:
// -Pegar cada item do vetor e somar com o valor de algoritmo logo subsequente. 
//Por ex: se o numero é 13 então tem que somar 13 com 14 e armazenar na posição que estava o 13.
//E fazer assim para todas as “casas” do vetor.
// -Pegue cada item do vetor e some com a média do vetor.
// -Pegue cada item do vetor e multiplique pelo quadrado dele mesmo. Ex: se é 3 então:3*3² = 27. Armazenar o 27 onde era o 3


#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>


using namespace std;

float num[10],vet1[10],vet2[10],vet3[10];
float valor = 0,media; 
int i;

main() {
	
	for(i = 0;i < 10;i++){
	cout <<  "Insira um numero: " << endl;
	cin >> num[i];
	}


	//1
	for(i = 0;i < 10;i++){
	vet1[i] = num[i] + (num[i] + 1);
	}
	
	
	//2
	for(i = 0;i < 10;i++){
	valor = num[i] + valor;
	}
	
	media = valor/10;
	
	for(i = 0;i < 10;i++){
	vet2[i] = num[i] + media;
	}

	
	//3
	for(i = 0;i < 10;i++){
	vet3[i] = num[i] * (num[i] * num[i]);
	}
	
	
	//3
	cout <<  "" << endl;
	cout <<  "Vetor 1 - " << endl;
	for(i = 0;i < 10;i++){
	cout <<  vet1[i] << endl;
	}

	cout <<  "" << endl;
	cout <<  "Vetor 2 - " << endl;
	for(i = 0;i < 10;i++){
	cout <<  vet2[i] << endl;
	}
	
	cout <<  "" << endl;
	cout <<  "Vetor 3 - " << endl;
	for(i = 0;i < 10;i++){
	cout <<  vet3[i] << endl;
	}
	
	cout << endl;
	system("pause");
	return(0);
}

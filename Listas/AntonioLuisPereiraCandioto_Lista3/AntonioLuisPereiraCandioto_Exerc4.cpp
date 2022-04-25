//4. Faça um programa que leia 10 valores do usuário e armazene em um vetor. Crie uma função que
//receba esse vetor de inteiros e faça o cálculo da diferença entre a média e o maior valor. O retorno
//dessa função é esse valor, que será exibido na main.


#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

float nummai[9];
float vet[9];
float d,aux,maior,media, soma = 0;

//cabeçalho

float calc_med(float);


float calc_med(float vet[]){
	for (int i=0;i<10;i++){
		soma = soma + vet[i];
	}
	
	for (int i=0; i <10; i++){
		nummai[i] = vet[i];
	}
	
	for (int i=0; i <10; i++){
		for (int x=0;x<10-i-1;x++){
			if (nummai[x]<nummai[x+1]){
				aux = nummai[x];
				nummai[x] = nummai[x + 1];
				nummai[x+1] = aux;
			}		
		}	
	}
	
	media = soma / 10;
	d = nummai[0] - media;
	
	cout << "Média: "<< media << endl;
	cout << "Maior: "<< nummai[0] << endl; 
	
	return d;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	for (int i = 0;i<10;i++){
		cout << "Digite um valor: ";
		cin >> vet[i];
	}
	
	float dif = calc_med(vet);
	
	cout << "Valor da diferença entre a média e o maior valor é: " << dif;
	
}


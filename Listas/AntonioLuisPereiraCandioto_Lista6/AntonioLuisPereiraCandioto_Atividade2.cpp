//2) Fazer um programa que recebe 5 valores float do usuário e armazene em um vetor.
//Esses valores são as notas do aluno ao longo do ano. Crie uma função que receba
//esse vetor e retorne a média do aluno. Se a média for acima de 5 exibir na tela alguma
//mensagem de aprovação, se for entre 3 e 5 exibir mensagem de recuperação e se for
//abaixo de 5 exibir mensagem de reprovação.

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;


float calcular_media(float *notas,int tam);

float calcular_media(float *notas,int tam){
	float r;
	
	for (int i=0;i<tam; i++){
		r = r + notas[i];
	}
	
	float result = r/tam;
	
	return result;
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int tam = 5; 
	float notas[tam];
	
	for (int i=0;i<tam; i++){
		cout << "Digite uma nota: " << endl;
		cin >> notas[i];
	}
	
	float media = calcular_media(notas,tam);
	
	if (media > 5){
		cout << "Aluno aprovado com média: " << media << endl;
	}
	if (media <= 5 && media >= 3){
		cout << "Aluno em recuperação com média: " << media << endl;
	}
	if (media < 3){
		cout << "Aluno reprovado com média: " << media << endl;
	}
	
}



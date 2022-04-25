//2) Fazer um programa que recebe 5 valores float do usu�rio e armazene em um vetor.
//Esses valores s�o as notas do aluno ao longo do ano. Crie uma fun��o que receba
//esse vetor e retorne a m�dia do aluno. Se a m�dia for acima de 5 exibir na tela alguma
//mensagem de aprova��o, se for entre 3 e 5 exibir mensagem de recupera��o e se for
//abaixo de 5 exibir mensagem de reprova��o.

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
		cout << "Aluno aprovado com m�dia: " << media << endl;
	}
	if (media <= 5 && media >= 3){
		cout << "Aluno em recupera��o com m�dia: " << media << endl;
	}
	if (media < 3){
		cout << "Aluno reprovado com m�dia: " << media << endl;
	}
	
}



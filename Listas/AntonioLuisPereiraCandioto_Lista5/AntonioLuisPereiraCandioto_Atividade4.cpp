//4) Considere o seguinte código:
//char* nome1 = "Luis";
//char* nome2 = "Fernando";
//char* nome3 = "Vitoria";
//char* nome4 = "Leticia";
//Use strcat para concatenar os nomes.
//Crie a função: 
//void exibir (char arr, int tamanho);

//Escreva o conteúdo da função exibir, sabendo que ela deve percorrer o 
//array de nomes e printar o array inteiro utilizando ponteiro.
//


#include <iostream>
#include <locale>
#include <cstdlib>
#include <cstring>

using namespace std;

void exibir (char, int);

void exibir (char *arr,int tamanho){
	for(int i=0;i<tamanho;i++){
		cout << arr[i];
	}
}


int main(){
	char *nome[50];
	char* nome1 = "Luis";
	char* nome2 = "Fernando";
	char* nome3 = "Vitoria";
	char* nome4 = "Leticia";	
	
	strcat(*nome,nome1);
	strcat(*nome,nome2);
	strcat(*nome,nome3);
	strcat(*nome,nome4);
		
	exibir(*nome,strlen(*nome));
		
}

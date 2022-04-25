//9) Crie um programa que leia do teclado duas frases.
//a) Através de ponteiro, determine quantas letras tem a primeira frase (ou seja, use o ponteiro para
//percorrer o array de char).
//b) Verifique o tamanho dessa segunda frase (usando strlen), use strcpy para copiar a segunda
//frase numa terceira variável e compare as duas frases usando strcmp. Faça essa parte usando
//uma função que recebe como parâmetro as duas frases e retorne o tamanho da maior frase.

#include <iostream>
#include <locale>
#include <cstdlib>
#include <cstring>

using namespace std;

int verify_len(char,char);

int verify_len(char *arr,char *arr2){
	
	char *maior_frase = NULL;
	
	int v = strcmp(arr,arr2);
	
	if (v < 0 ){
		maior_frase = arr2;
		int tamanho = strlen(maior_frase);
		return tamanho;
	}
	if (v > 0){
		maior_frase = arr; 
		int tamanho = strlen(maior_frase);
		return tamanho;
	}
	if (v == 0){
		int tamanho = v;
		return tamanho;
	}	
	
}


int main() {
	setlocale(LC_ALL,"Portuguese");
	int i;
	int tam = 2;
	char *frase[50];
	
	for(i = 0;i < tam;i++){
	cout <<  "Digite uma frase: " << endl;
	cin.getline(frase[i], 50);
	}

	//quantas letras tem a primeira frase	
		
 	cout << endl << "Tamanho frase 1: " << endl;
	cout << strlen(frase[0]) << endl;
	

	//tamanho dessa segunda frase, guarde a frase numa terceira variável e compare as duas frases usando strcmp
	
	int tam_maior_fr = verify_len(frase[0],frase[1]);
	
	cout << endl << "O tamanho da maior frase é: " << tam_maior_fr << endl; 
}




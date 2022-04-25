//7. Criar uma função que receba um caractere como parâmetro e retorne 1 (um) caso seja uma
//vogal e zero caso não seja. Exiba a mensagem “É vogal” ou “Não é vogal” dentro da função main
//(principal), ou seja, vai precisar de um if para verificar o retorno dessa função.

#include <iostream>
#include <cstdlib>
#include <locale>
#include <string.h>

using namespace std;

char letra[30];

//cabeçalho

char verify(char);


char verify(char *letra){
	if (strcmp(letra, "A") == 0 || strcmp(letra, "a") == 0){
		return 1;
	}
	else if (strcmp(letra, "E") == 0 || strcmp(letra, "e") == 0){
		return 1;
	}
	else if (strcmp(letra, "I") == 0 || strcmp(letra, "i") == 0){
		return 1;
	}
	else if (strcmp(letra, "O") == 0 || strcmp(letra, "o") == 0){
		return 1;
	}
	else if (strcmp(letra, "U") == 0 || strcmp(letra, "u") == 0){
		return 1;
	}
	else{
		return 0;
	}
	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	
	int result = verify(letra);
	
	if (result == 1){
		cout << "'" << letra << "' é uma vogal!" << endl;
	}
	else{
		cout << "'" << letra << "' não é uma vogal!" << endl;
	}
	
}

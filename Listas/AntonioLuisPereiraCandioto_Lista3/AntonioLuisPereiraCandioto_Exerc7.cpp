//7. Criar uma fun��o que receba um caractere como par�metro e retorne 1 (um) caso seja uma
//vogal e zero caso n�o seja. Exiba a mensagem �� vogal� ou �N�o � vogal� dentro da fun��o main
//(principal), ou seja, vai precisar de um if para verificar o retorno dessa fun��o.

#include <iostream>
#include <cstdlib>
#include <locale>
#include <string.h>

using namespace std;

char letra[30];

//cabe�alho

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
		cout << "'" << letra << "' � uma vogal!" << endl;
	}
	else{
		cout << "'" << letra << "' n�o � uma vogal!" << endl;
	}
	
}

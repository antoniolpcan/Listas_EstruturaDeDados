//13)Receber do teclado uma string (seu nome) e imprimir quantas letras A, E, I, O, U tem esta string. 
//Considerar minúscula e maiúscula. Pode utilizar em algum momento o strlen.


#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>

using namespace std;

char nome[30]; 
int x;
int counta = 0,counte = 0,counti = 0,counto = 0,countu = 0;


main() {
	setlocale(LC_ALL,"Portuguese");
	cout <<  "Insira um texto: " << endl;
	cin >> nome;
	
	
	for(x=0;x<strlen(nome);x++){
		
		if (nome[x] == 'A' || nome[x] == 'a'){
			counta = counta + 1;
		}
		
		if (nome[x] == 'E' || nome[x] == 'e'){
			counte = counte + 1;
		}
		
		if (nome[x] == 'I' || nome[x] == 'i'){
			counti = counti + 1;
		}
		
		if (nome[x] == 'O' || nome[x] == 'o'){
			counto = counto + 1;
		}
		
		if (nome[x] == 'U' || nome[x] == 'u'){
			countu = countu + 1;
		}
	}
	
	cout << "Numero de letras A: " << counta << endl;
	cout << "Numero de letras E: " << counte << endl;
	cout << "Numero de letras I: " << counti << endl;
	cout << "Numero de letras O: " << counto << endl;
	cout << "Numero de letras U: " << countu << endl;
				
	cout << endl;
	system("pause");
	return(0);
}

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//Preencher um vetor com n�meros inteiros (10 unidades); 
//solicitar um n�mero do teclado.Pesquisar se esse n�mero existe no vetor. 
//Se existir, imprimir em qual posi��o do vetor esse n�mero est�. 
//Se n�o existir, imprimir alguma mensagem que n�o existe.


using namespace std;

int num[10] = {5,10,15,20,25,30,35,40,45,50};
int valor; 
int i;
bool exist = false;

main() {
	cout <<  "Insira um numero: " << endl;
	cin >> valor;
	
	for(i = 0;i < 10;i++){
		if (num[i] == valor) {
			cout << "O numero esta na posicao "<< i << endl;
			exist = true;
		}
	}
	
	if (exist != true){
	cout <<  "O numero nao existe no vetor." << endl;
	}
	
	
	cout << endl;
	system("pause");
	return(0);
}

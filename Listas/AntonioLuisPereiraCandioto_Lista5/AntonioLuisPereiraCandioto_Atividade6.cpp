//6) A Microsoft est� contratando funcion�rios para realizarem testes no gerenciador de mem�ria do seu
//novo computador. Seu programa dever� ler 3 n�meros inteiros, 3 n�meros decimais, 3 letras,
//armazen�-las em vari�veis, e depois, atrav�s de ponteiros, trocar os seus valores, substituindo todos os
//n�meros inteiros pelo n�mero 2014, os decimais por 9.99, e as letras por �Y�. Depois da substitui��o, o
//programa dever� exibir o valor das vari�veis j� devidamente atualizadas.


#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,tam=3;
	int *inteiros[tam],inte[tam];
	double *decimais[tam],deci[tam];
	char *letras[tam],letr[tam];
	
	for(i=0;i<tam;i++){
		cout << endl << "Insira um n�mero inteiro: " << endl;
		cin >> inte[i];
		inteiros[i] = &inte[i];
		
		cout << "Insira um n�mero decimal: " << endl;
		cin >> deci[i];
		decimais[i] = &deci[i];
		
		cout << "Insira uma letra: " << endl;
		cin >> letr[i];
		letras[i] = &letr[i];
	}
	
	cout << endl << "Valores desatualizados: " << endl << endl;
	//prints desatualizados
	
	cout << "N�meros inteiros desatualizados: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *inteiros[i] << endl;
	}	
	
	cout << "N�meros decimais desatualizados: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *decimais[i] << endl;
	}	
	
	cout << "Letras desatualizadas: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *letras[i] << endl;
	}		


	for(i=0;i<tam;i++){
		inte[i] = 2014;
		
		deci[i] = 9.99;
		
		letr[i] = 'Y';
	}
	
	cout << endl << "Valores atualizados: " << endl << endl;
	//prints atualizados
	
	cout << "N�meros inteiros atualizados: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *inteiros[i] << endl;
	}	
	
	cout << "N�meros decimais atualizados: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *decimais[i] << endl;
	}	
	
	cout << "Letras atualizadas: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *letras[i] << endl;
	}			
}


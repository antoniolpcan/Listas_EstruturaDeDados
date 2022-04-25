//6) A Microsoft está contratando funcionários para realizarem testes no gerenciador de memória do seu
//novo computador. Seu programa deverá ler 3 números inteiros, 3 números decimais, 3 letras,
//armazená-las em variáveis, e depois, através de ponteiros, trocar os seus valores, substituindo todos os
//números inteiros pelo número 2014, os decimais por 9.99, e as letras por ’Y’. Depois da substituição, o
//programa deverá exibir o valor das variáveis já devidamente atualizadas.


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
		cout << endl << "Insira um número inteiro: " << endl;
		cin >> inte[i];
		inteiros[i] = &inte[i];
		
		cout << "Insira um número decimal: " << endl;
		cin >> deci[i];
		decimais[i] = &deci[i];
		
		cout << "Insira uma letra: " << endl;
		cin >> letr[i];
		letras[i] = &letr[i];
	}
	
	cout << endl << "Valores desatualizados: " << endl << endl;
	//prints desatualizados
	
	cout << "Números inteiros desatualizados: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *inteiros[i] << endl;
	}	
	
	cout << "Números decimais desatualizados: " << endl;
	
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
	
	cout << "Números inteiros atualizados: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *inteiros[i] << endl;
	}	
	
	cout << "Números decimais atualizados: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *decimais[i] << endl;
	}	
	
	cout << "Letras atualizadas: " << endl;
	
	for(i=0;i<tam;i++){
		cout << *letras[i] << endl;
	}			
}


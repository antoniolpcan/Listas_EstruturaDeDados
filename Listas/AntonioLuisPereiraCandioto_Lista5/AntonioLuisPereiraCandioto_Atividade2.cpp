//2) Seja a seguinte struct que � utilizada para descrever os produtos que est�o no estoque de uma loja:
//struct Produto {
//	char nome[30];/* Nome do produto */
//	int *codigo;/* Codigo do produto */
//	double  *preco;/* Preco do produto */
//	char fornecedor[50]    /* Fornecedor do produto*/
//};
//Fa�a um programa que armazene 5 produtos e exiba-os natela.
//Obs:fique a tento, porque c�digo e pre�o s�o ponteiros dentro de struct.

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

struct Produto {
	char nome[30];
	int *codigo;
	double *preco;
	char fornecedor[50];
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,tam=5;
	struct Produto p[tam];
	int cod2[tam];
	double preco2[tam];
	
	
	for(i=0;i<tam;i++){
		cout << endl << "Nome: " << endl;
		cin >> p[i].nome;
		
		cout << "C�digo: " << endl;
		cin >> cod2[i];
		p[i].codigo = &cod2[i];
		
		cout << "Pre�o: " << endl;
		cin >> preco2[i];
		p[i].preco = &preco2[i];
		
		cout << "Fornecedor: " << endl;
		cin >> p[i].fornecedor;
				
	}


	for(i=0;i<tam;i++){
		cout << endl << "Nome: " << p[i].nome << endl;
		
		cout << "C�digo: "  << *p[i].codigo << endl;
		
		cout << "Pre�o: " << *p[i].preco << endl;
		
		cout << "Fornecedor: "<< p[i].fornecedor << endl;
	
	}
}


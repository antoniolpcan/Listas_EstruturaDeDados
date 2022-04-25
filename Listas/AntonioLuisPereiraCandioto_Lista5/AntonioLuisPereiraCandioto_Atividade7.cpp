//7) Em fun��o do aumento dos combust�veis, o setor de vendas da rede Carrefour precisa atualizar os
//valores de seus produtos no seu cat�logo de vendas. O presidente ordenou um aumento de 4.78% para
//todos os itens. S�o 10 itens no cat�logo. Sua tarefa � elaborar um programa que leia o nome e valor
//atual dos produtos (dados pelo usu�rio) e armazene em um vetor, e ap�s isso efetue o reajuste do valor
//dos produtos em outro vetor. O reajuste (acesso ao vetor) dever� ser feito utilizando ponteiros. Imprima
//na tela o valor reajustado, usando tamb�m ponteiros.

#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>

using namespace std;

struct Produto {
	char nome[30];
	double *valor;
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,tam=10;
	char nome[50];
	double valores[tam];
	struct Produto p[tam];
	
	for(i=0;i<tam;i++){
		cout << endl << "Nome do produto: " << endl;
		cin >> p[i].nome;
		
		cout << "Valor do produto: " << endl;
		cin >> valores[i];
		p[i].valor = &valores[i];
	}
	
	// desatualizados
	cout << endl << "Valores desatualizados: " << endl << endl;
	for(i=0;i<tam;i++){
		cout << "Nome do produto: " << p[i].nome << endl;
		
		cout << "Valor do produto: " << *p[i].valor << endl;
	}
	
	for(i=0;i<tam;i++){
		valores[i] = valores[i] + (valores[i] * (4.78/100));
	}
	
	//valores reajustados
	cout << endl << "Valores atualizados: " << endl << endl;
	for(i=0;i<tam;i++){
		cout << "Nome do produto: " << p[i].nome << endl;
		
		cout << "Valor do produto: " << *p[i].valor << endl;
	}
}

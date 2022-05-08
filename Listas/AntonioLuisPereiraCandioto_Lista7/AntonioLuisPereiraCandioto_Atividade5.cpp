//5) Implemente no método main(...), um programa que leia 20 números de um vetor(tendo valores positivos, negativos, pares e ímpares).
//Crie três pilhas(P1, P2 e P3), estáticas de tamanho 20 e proceda, para cada um deles, como segue:
//- se o número for par, insira-o na pilha P1;
//- se o número lido for ímpar, insira na pilha P2;
//- se tiver positivo na pilha P2, retirar na pilha P2 e inserir na pilha P3;
//- se tiver negativo na pilha P1, retirar da pilha P1 e inserir na pilha P3.
//- Ao final, imprima cada uma das pilhas P1, P2 e P3


#include <iostream>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;

void Print(Pilha *P);

void Print(Pilha *P){
	for (int i = P->topo; i>-1 ;i--) 
		cout << P->itens[i] << endl;
}
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam = 20;
	
	int vet[tam];
	int num_elem,i;
	
	bool erro;
	Pilha P1, P2, P3;
	
	Create(&P1);
	Create(&P2);
	Create(&P3);
	
	for(i=0;i<tam;i++){	
		cout << "Digite um número" << endl;
		cin >> vet[i];
	}
	
	for(i=0;i<tam;i++){
		
		if (vet[i] % 2 == 0){
			Push(&P1, &vet[i], &erro);
		}
		else{
			Push(&P2, &vet[i], &erro);
		}	
	}
	
	cout << endl << "Pilha 1:" << endl;
	Print(&P1);

	cout << endl << "Pilha 2:" << endl;
	Print(&P2);	
	
	for(i=P1.topo; i>-1 ;i--){
		
		if (P1.itens[i] >= 0){
			Push(&P3, &P1.itens[i], &erro);
			Pop(&P1, &erro);
		}
		
		else if (P1.itens[i] < 0){
			Push(&P3, &P1.itens[i], &erro);
			Pop(&P1, &erro);
		}
		
	}
		

	for(i=P2.topo; i>-1 ;i--){
		
		if (P2.itens[i] >= 0){
			Push(&P3, &P2.itens[i], &erro);
			Pop(&P2, &erro);
		}
		
		else if (P2.itens[i] < 0){
			Push(&P3, &P2.itens[i], &erro);
			Pop(&P2, &erro);
		}
		
	}

							
	
	
	cout << endl << endl <<  "Pilhas finais:" << endl;
	
	cout << endl << "Pilha 1:" << endl;
	Print(&P1);
	
	cout << endl << "Pilha 2:" << endl;
	Print(&P2);	
	
	cout << endl << "Pilha 3:" << endl;
	Print(&P3);
	
}

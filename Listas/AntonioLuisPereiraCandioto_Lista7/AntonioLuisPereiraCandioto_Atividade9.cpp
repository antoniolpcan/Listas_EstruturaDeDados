//9)Observe o desenho abaixo (por linha e não por coluna)
//e transcreva para código as ações efetuadas. No final exiba a pilha.


#include <iostream>
#include <locale>
#include "estrutura_pilha_char.h"

using namespace std;

void Print(Pilha *P);

void Print(Pilha *P){
	for (int i = P->topo; i>= 0 ;i--) 
		cout << P->itens[i] << endl;
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	bool erro;
	Pilha P;
	
	Create(&P);
	
	elem A = 'A';
	
	Push(&P, &A, &erro);
	
	cout << endl << "---> " << endl << endl;
	Print(&P);

	elem B = 'B';	
	Push(&P, &B, &erro);
	
	cout << endl << "---> " << endl << endl;
	Print(&P);
		
	elem C = 'C';
	Push(&P, &C, &erro);	
	
	cout << endl << "---> " << endl << endl;
	Print(&P);
		
	elem D = 'D';	
	Push(&P, &D, &erro);	
	
	cout << endl << "---> " << endl << endl;
	Print(&P);
		
	Pop(&P, &erro);
	
	Pop(&P, &erro);
	
	cout << endl << "---> " << endl << endl;
	Print(&P);
	
	elem K = 'K';
	Push(&P, &K, &erro);	
	
	cout << endl << "---> " << endl << endl;
	Print(&P);
		
	elem V = 'V';
	Push(&P, &V, &erro);	
	
	cout << endl << "---> " << endl << endl;
	Print(&P);
		
	Pop(&P, &erro);
}

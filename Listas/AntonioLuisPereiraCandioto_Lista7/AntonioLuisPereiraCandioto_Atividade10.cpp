//10) Construa um programa utilizando uma pilha que resolva o seguinte problema:
//Armazene as placas dos carros (apenas os números) que estão estacionados numa rua sem saída 
//e estreita.Dado uma placa verifique se o carro está estacionado na rua.Caso esteja, informe a sequência de carros
//que deverá ser retirada para que o carro em questão consiga sair.

#include <iostream>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

void Print(Pilha *P);

void Print(Pilha *P){
	for (int i = P->topo; i>= 0 ;i--) 
		cout << P->itens[i] << endl;
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	bool erro;
	Pilha Rua;
	int placa,i,num = 4,seq = 1;
	
	Create(&Rua);
	
	elem Carro1 = 1234567;
	elem Carro2 = 7654321;	
	elem Carro3 = 6571234;
	elem Carro4 = 5671324;
	
	Push(&Rua, &Carro1, &erro);
	Push(&Rua, &Carro2, &erro);
	Push(&Rua, &Carro3, &erro);	
	Push(&Rua, &Carro4, &erro);	
	
	cout << endl << "Rua ---> " << endl << endl;
	Print(&Rua);	
	
	cout << endl << "Digite a placa do carro: " << endl;
	cin >> placa;
	
	for (i=Rua.topo;i>=0;i--){
		
		if (placa == Rua.itens[i]){
			
			cout << endl << "A sequência de carros que deverá ser retirada para que o carro em questão consiga sair:" << endl;
			while(Rua.itens[num-1] != placa){
				
				cout << seq << " - "<< Rua.itens[num-1] << endl;
				num = num - 1;
				seq = seq + 1;
			}
			
		}
		else{
			
			cout << endl << "Placa não encontrada entre os carros." << endl;
			break;
			
		}
		
	}
	
}









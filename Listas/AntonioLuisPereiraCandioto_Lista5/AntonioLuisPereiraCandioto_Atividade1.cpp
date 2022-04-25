//1) A delegação francesa de Futsal deseja criar um programa que deva conter o nome do atleta, sua posição, idade e altura. 
//Crie uma estrutura representando um atleta. Escreva um programa que leia os dados de cinco atletas
//e os exiba por ordem de idade, do mais velho para o mais novo

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

struct Futsal{
	char nome[50];
	char posicao[50];
	int idade;
	float altura;
};	

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int i,x,tam = 5;
	struct Futsal fut[tam];
	struct Futsal aux[tam];
	
	for (i=0;i<tam;i++){
		cout << "Insira nome: " << endl;
		cin >> fut[i].nome;
		
		cout << "Insira a posição: " << endl;
		cin >> fut[i].posicao;
		
		cout << "Insira a idade: " << endl;
		cin >> fut[i].idade;
		
		cout << "Insira a altura: " << endl;
		cin >> fut[i].altura;
		
		cout << endl;
		
	}
	
	for (i=0; i <tam; i++){
		for (x=0;x<tam-i-1;x++){
			if (fut[x].idade<fut[x+1].idade){
				aux[i] = fut[x];
				fut[x] = fut[x + 1];
				fut[x+1] = aux[i];
			}		
		}	
	}
		
	cout << "Atletas por ordem de idade decrescente:" << endl;
	for (i = 0; i < tam; i ++){
		cout << "Nº: "<< i+1 << " - Atleta: " << fut[i].nome <<" com " << fut[i].idade << "anos." << endl;
	}
	
}


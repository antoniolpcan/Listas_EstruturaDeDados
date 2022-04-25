//5) Construir um programa que implementa uma agenda eletr�nica. O
//programa deve ter um menu com as seguintes op��es:
//1- Entrar um nome e telefone na agenda.
//2- Imprimir na tela os dados de uma das pessoas cadastradas (consulta por
//nome)
//3- Exibir na tela a lista dos nomes que come�am pela letra indicada
//4- Sair do programa
//Obs 1: usar aloca��o din�mica para cada contato inserido.
//Obs 2: usar fun��o (passagem de par�metros por refer�ncia) para os 3 primeiros itens
//do menu.

#include <iostream>
#include <locale>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Agenda{
	char nome[50];
	char telefone[50];
};
	
Agenda adicionar(Agenda *contatos, int i);
Agenda adicionar(Agenda *contatos, int i){

    cout << "Digite um nome sem espa�os: " << endl;
    cin >> contatos[i].nome;
    cout << "Digite um telefone: " << endl;
    cin >> contatos[i].telefone;
    
    return contatos[i];
}

void pesquisar_nome(Agenda *contatos, int i);
void pesquisar_nome(Agenda *contatos, int i){

	char nome[50];
	
	if (i == -1){
		cout << "Lista vazia." << endl;
	}
	else{
		cout << "Qual nome voc� deseja pesquisar? " << endl;
		cin >> nome;
		
		cout << "Lista de contatos: "<< endl;
		for (int num=0;num<10;num++){
	    	int comp = strcmp(contatos[num].nome,nome);
	    	if (comp == 0){
	    		cout << "==========================================" << endl;
	    		cout << "Contato em indice " << num << endl;
	    		cout << "Nome: " << contatos[num].nome << endl << "Telefone: " << contatos[num].telefone  << endl;	
	    		cout << "==========================================" << endl;
	    		break;
			}
		}
	}	
}

void pesquisar_inicial(Agenda *contatos, int i);
void pesquisar_inicial(Agenda *contatos, int i){
	
	char letra;

	if (i == -1){
		cout << "Lista vazia." << endl;
	}
	else{
		cout << "Qual letra voc� deseja pesquisar? " << endl;
		cin >> letra;
		cout << "Lista de contatos com letra: "<< letra << endl;
		
		for (int num=0;num<10;num++){
	    	if (contatos[num].nome[0] == letra){
	    		cout << "========================================================" << endl;
	    		cout << "Contato em indice " << num << endl;
	    		cout << "Nome: " << contatos[num].nome << endl << "Telefone: " << contatos[num].telefone  << endl;
	    		cout << "========================================================" << endl;
			}
		}
	}
}



int main(){
	setlocale(LC_ALL,"Portuguese");
	int sessao = 0;
	int num_max = 10;
	int i = -1;

	struct Agenda *contatos=NULL;
	
	contatos = (Agenda*)malloc(num_max*sizeof(Agenda));
	
	while(sessao != 4){
		
	cout << "==========================================" << endl;
	cout << "=            Agenda eletr�nica           =" << endl;
	cout << "==========================================" << endl;	
	cout << "= Digite o que deseja:                   =" << endl;	
	cout << "= 1 - Adicionar na agenda                =" << endl;
	cout << "= 2 - Mostrar dados de uma pessoa.       =" << endl;
	cout << "= 3 - Mostrar dados pela inicial         =" << endl;
	cout << "= 4 - Sair                               =" << endl;
	cout << "==========================================" << endl;
	
	cin >> sessao;
	
	switch (sessao){
	    case 1:
		    i = i + 1;
	    	if (i < num_max){
				contatos[i] = adicionar(contatos,i);
			    break;
			}
		    else{
		    	cout << "O n�mero m�ximo de inser��es foi atingido." << endl;
				break;
			}
	        break;
	
	    case 2:
	        cout << "2" << endl;
	        pesquisar_nome(contatos, i);
	        break;
	        
	    case 3:
	        cout << "3" << endl;
	        pesquisar_inicial(contatos, i);
	        break;
	        
	    case 4:
	        cout << "4" << endl;
	        break;
	        
	    default:
	        cout << "Valor inv�lido." << endl;
	        break;
	}
	
	}
	
	cout << "========================================================" << endl;
	cout << endl << "Voc� saiu." << endl;
	cout << "========================================================" << endl;
}

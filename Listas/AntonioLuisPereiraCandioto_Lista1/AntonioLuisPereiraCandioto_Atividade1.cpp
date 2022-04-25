#include <iostream>
#include <cstdlib>
#include <stdio.h>


// 1)Faça um programa que apresente o total da soma dos cem primeiros números inteiros.

using namespace std;

int soma = 0;
int i;

main() {
    for(i = 0; i <= 100; i++){
        soma = i + soma; 
	}   
	cout << "\n Resultado: "<< soma << endl;	
    system("pause");
    return(0);
}

//3) Examine o seguinte c�digo:
//	int arr[5] = { 30, 20, 50, 70, 10 };
//	int *parr = &arr[4];
//	int inx = 0;inx = *parr++;

//a) O c�digo compila?
//b) Ap�s executar o c�digo, qual ser� o valor de inx?
//c) Ap�s executar o c�digo, para onde parr estar� apontando?

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){
int arr[5] = { 30, 20, 50, 70, 10 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;

// 1)
// Sim. O c�digo compila.

cout << inx << endl;

// 2) 
// O valor de inx ser� 10.


cout << *parr;

// 3) 
// O valor de parr ser� 10.
}

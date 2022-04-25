//3) Examine o seguinte código:
//	int arr[5] = { 30, 20, 50, 70, 10 };
//	int *parr = &arr[4];
//	int inx = 0;inx = *parr++;

//a) O código compila?
//b) Após executar o código, qual será o valor de inx?
//c) Após executar o código, para onde parr estará apontando?

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
// Sim. O código compila.

cout << inx << endl;

// 2) 
// O valor de inx será 10.


cout << *parr;

// 3) 
// O valor de parr será 10.
}

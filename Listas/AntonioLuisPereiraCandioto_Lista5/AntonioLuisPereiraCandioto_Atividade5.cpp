//5) O que aparecer� quando executarmos o programa abaixo?


#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;
int main(){

	int count = 10, *temp, sum = 0;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	
	// 5) Ser�o retornados 3 valores '20', pois o count teve seu valor alterado, tendo o
	// valor 20 atribuido ao ponteiro temp, sobrepondo seu valor inicial.
	// temp e sum tamb�m retornar�o 20 por ter o valor atribuido a eles.
	
	cout << "count = " << count << "*temp = " << *temp << "sum = " << sum;
}

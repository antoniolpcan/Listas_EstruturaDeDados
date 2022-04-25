#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

//Fazer um programa que gere a saída.
//* * * * * * * * * * * *
//O,2,4,6,8,10,12,14
//* * * * * * * * * * * *


using namespace std;

int i;
int start = 0;
int end = 14;

main() {
	
	for(i = start;i <= end;i++){
		if (i % 2 == 0) {
			if (i!=end){
			cout << i << ",";
			}
			else{
			cout << i << endl;
			}
		}
	}
	cout << endl;
	system("pause");
	return(0);
}

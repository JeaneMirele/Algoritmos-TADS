/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
Obs: Considere cada mês com 30 dias.*/

#include <iostream>
using namespace std;


int main (){
	
	int anos, meses, dias, soma=0;
	
	cout << "\n\tDigite sua idade em anos, meses e dias\n";
	cin >> anos >> meses >> dias;
	
	anos*=365;
	meses*=30;
	soma=anos+meses+dias;
	
	cout<< "\n\tVoce tem " << soma << " dias de vida";
	
	
	
	
	
}

/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada. */

#include <iostream>
using namespace std;

int main(){
	
	
	int N, soma=0;
	char letra;
	
	cout << "Digite um numero inteiro e uma letra, (para antecessor digite a, e para sucessor digite s)\n";
	cin >> N >> letra;
	
	if(letra=='a'){
		soma=((N-1) + (N-2) + (N-3)+ (N-4) + (N-5) + (N-6) + (N-7) + (N-8) + (N-9) + (N-10));
		cout<< soma;
		
	}else{
	
		if(letra=='s')
	
		soma=((N+1) + (N+2) + (N+3)+ (N+4) + (N+5) + (N+6) + (N+7) + (N+8) + (N+9) + (N+10));
		cout << soma;
	}
}

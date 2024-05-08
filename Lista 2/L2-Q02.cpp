/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo. */

#include <iostream>
using namespace std;

int main(){
	
	int N;
	
	cout << "Digite um numero:\n";
	cin >> N;
	
	if (N%2==0){
		
		if(N>100){
			cout << "Numero par e maior que 100!\n";
		}else{
			cout << "Numero par e menor que 100!\n";
		}
		
	}else{
		if (N>0){
			cout <<"Numero impar e positivo\n";
			
		}else{
			cout << "Numero impar e negativo\n";
		}
	}
		
	}
		
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


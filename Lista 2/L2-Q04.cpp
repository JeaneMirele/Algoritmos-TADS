/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago. */

#include <iostream>
using namespace std;

int main(){
	
	int ano;
	float preco, imposto;
	
	cout<< " Digite o ano e o preco do seu carro:\n";
	cin >> ano >> preco;
	
	if(ano<1990){
		imposto=preco*0.01;
		cout<< "O imposto a ser pago e de:" << imposto;

	}else if(ano>=1990){
		imposto=preco*0.015;
		cout<< " O imposto a ser pago e de:"<< imposto;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


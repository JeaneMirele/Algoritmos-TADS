
/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das presta��es de 
acordo com a quantidade de parcelas desejada pelo usu�rio. A loja est� vendendo seus produtos 
a vista ou parcelado em at� 10 vezes sem juros. */

#include <iostream>
using namespace std;

int main(){
	
	float compra;
	int parcelas,prestacoes;
	
	cout << "\n\tDigite o valor da sua compra, e em quantas deseja parcelar (1 ate 10x sem juros):\n";
	cin >> compra >> parcelas;
	
	prestacoes=compra/parcelas;
	
	cout << "\n\t Sua compra foi parcelada em " << parcelas << "x" << " e as prestacoes ficaram no valor de " << prestacoes;
	
	
	
	
	
	
	
	
	
	
	
	
}

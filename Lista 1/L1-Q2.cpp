/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de 
uma carteira. */

#include <iostream>
using namespace std;

int main(){
	
	int anos, qtdDia;
	float precoCart, gasto=0;
	
	cout << "\n\t Digite a quantos anos voce fuma, quantidade por dia, e o preco da carteira\n";
	cin >> anos >> qtdDia >> precoCart;
	
	
	anos*=365;
	qtdDia=qtdDia*anos/20;
	gasto= precoCart*qtdDia;

	
	cout << "\n\tSeu gasto em cigarros ate hoje foi" << gasto;
	
	
	
	
	
	
	
	
	
	
}

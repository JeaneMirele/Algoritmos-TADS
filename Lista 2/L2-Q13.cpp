/*3. Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela
abaixo:
CONSUMO (Km/l) MENSAGEM
Menor que 8 Venda o carro!
Entre 8 e 12 Econômico!
Maior que 12 Super econômico! */

#include <iostream>
using namespace std;

int main(){
	
	
	int distancia, litros, consumo;
	
	cout << "Digite a distancia ate o seu destino, e a quantidade de litros de gasolina para esse percurso:\n";
	cin >> distancia >> litros;
	
	consumo=distancia/litros;
	
	if(consumo<8){
		cout<< "Venda o carro!\n";
	}else if (consumo>=8 && consumo<=12){
		cout << "Economico!";
	}else if(consumo>12){
		cout<< "Super economico!\n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

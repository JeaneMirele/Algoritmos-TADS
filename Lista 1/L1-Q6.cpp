/* custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do 
distribuidor e dos impostos, ambos aplicados ao custo de f�brica. Supondo que a percentagem 
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de 
f�brica de um carro e escreva o custo ao consumidor. */

#include <iostream>

using namespace std;

int main(){
	
	float custoF, custoConsumidor, imposto, distribuidor;
	
	cout<< "Digite o valor de fabrica do veiculo:\n";
	cin >> custoF;
	
	distribuidor=0.28;
	imposto=0.45;
	custoConsumidor= custoF+(custoF*distribuidor)+(custoF*imposto);
	
	cout<< "O custo do seu veiculo sera de"<< custoConsumidor;

}

/*O cardápio de uma lanchonete é o seguinte:
Sanduíche
Código Descrição Preço Unitário
100 Cachorro quente 1,10
101 Baurú simples 1,30
102 Baurú com ovo 1,50
103 Hamburger 1,10
104 Cheesburger 1,30
Bebida
Código Descrição Preço Unitário
105 Refrigerante 1,00
106 Suco 2,00
107 Nescau 1,50
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
de cada um e calcule o valor a ser pago por aquele lanche. */

#include <iostream>
using namespace std;


int main (){
	
	int codigoSand, codigoBeb, quantidadeSand, quantidadeBeb;
	float valor;
	
	cout << "Digite o codigo do seu sandwiche, e da sua bebida:\n";
	cin >> codigoSand >> codigoBeb;
	
	cout << "Digite a quantidade de sandwiches, e bebidas:\n";
	cin >> quantidadeSand >> quantidadeBeb;
	
	
	if(codigoSand==100 || codigoSand==103 && codigoBeb==105){
		
		valor= (1.1*quantidadeSand)+(quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
		
	}else if (codigoSand==101 || codigoSand==104 && codigoBeb==105){
		
		valor= (1.3*quantidadeSand)+(quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
		
	}else if (codigoSand==102 && codigoBeb==105){
		
		valor= (1.5*quantidadeSand)+(quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
		
	}else if (codigoSand==100 || codigoSand==103 && codigoBeb==106){
		
		valor= (1.1*quantidadeSand)+(2*quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
		
	}else if (codigoSand==101 || codigoSand==104 && codigoBeb==106){
		
		valor= (1.3*quantidadeSand)+(2*quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
	}else if(codigoSand==102 && codigoBeb==106){
		
		valor= (1.5*quantidadeSand)+(2*quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
		
	}else if(codigoSand==100 || codigoSand==103 && codigoBeb==107){
		
		valor= (1.1*quantidadeSand)+(1.5*quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
		
	}else if (codigoSand==101 || codigoSand== 104 && codigoBeb==107){
		
		valor= (1.3*quantidadeSand)+(1.5*quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
	}else if(codigoSand==102 && codigoBeb==107){
		
		valor= (1.5*quantidadeSand)+(1.5*quantidadeBeb);
		cout << "Total do pedido R$ " << valor;	
	}else{
		cout<< "Codigo invalido, digite um valor entre 100 e 104 para sandwiche, e 105 e 107 para bebida.\n";
	}		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	







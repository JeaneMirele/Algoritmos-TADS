/*Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles 
n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:   
� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;   
� Equil�teros: tem os comprimentos dos tr�s lados iguais;   
� Is�sceles: tem os comprimentos de dois lados iguais;  �  Escaleno: tem os comprimentos dos tr�s 
lados diferentes. */

#include <iostream>
using namespace std;

int main(){
	
	int X, Y, Z;
	
	cout<< " Digite 3 valores para os lados de um triangulo, X, Y, e Z:\n";
	cin >> X >> Y >> Z;
	
	if (!((X< Y+Z) && (Y< X+Z) && (Z< X+Y))){
		cout<< " Nao e triangulo, pois o comprimento de cada lado em um tri�ngulo, � menor que a soma dos outros dois lados.\n";
	}else if ((X==Y) && (Y==Z)){
	
			cout<< " E um triangulo equilatero\n";
			
	}else if ((X==Y) && (Y!=Z)){
				cout<< " E um triangulo isosceles\n";
				
	}else{
					cout<< "E um triangulo escaleno\n";
	}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	






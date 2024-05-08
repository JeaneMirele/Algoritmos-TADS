/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:   
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;   
• Equiláteros: tem os comprimentos dos três lados iguais;   
• Isósceles: tem os comprimentos de dois lados iguais;  •  Escaleno: tem os comprimentos dos três 
lados diferentes. */

#include <iostream>
using namespace std;

int main(){
	
	int X, Y, Z;
	
	cout<< " Digite 3 valores para os lados de um triangulo, X, Y, e Z:\n";
	cin >> X >> Y >> Z;
	
	if (!((X< Y+Z) && (Y< X+Z) && (Z< X+Y))){
		cout<< " Nao e triangulo, pois o comprimento de cada lado em um triângulo, é menor que a soma dos outros dois lados.\n";
	}else if ((X==Y) && (Y==Z)){
	
			cout<< " E um triangulo equilatero\n";
			
	}else if ((X==Y) && (Y!=Z)){
				cout<< " E um triangulo isosceles\n";
				
	}else{
					cout<< "E um triangulo escaleno\n";
	}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	






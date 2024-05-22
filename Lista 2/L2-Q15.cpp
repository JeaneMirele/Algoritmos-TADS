 /*15. Calcule as ra�zes de uma equa��o de 2� grau. Observe que:
� x = -b � v?/2a, onde ? = B2 - 4ac;
� ax2 + bx + c = 0 representa uma equa��o de 2� grau;
� A vari�vel a tem que ser diferente de zero. Caso seja igual, escreva a mensagem �N�o � equa��o de
segundo grau�;
� Se ? < 0, n�o existe real. Escreva a mensagem �N�o existe raiz�;
� Se ? = 0, existe uma raiz real. Escreva a raiz e a mensagem �Raiz �nica�;
� Se ? = 0, escreva as duas ra�zes reais. */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a,b,c;
	double delta, raiz1, raiz2;
	
	cout << "\nDigite os valores de a, b e c para a equacao do 2� grau:\n";
	cin >> a >> b >>c;
	
	if(a==0){
		cout<< "\nNao � equa��o de segundo grau, digite um valor diferente de 0 para a;\n";
	}else{
	
	delta=b*b - 4*a*c;
	
	} 
	
	if(delta<0){
		cout<< "\nNao existe raiz\n";
	}else if (delta==0){
		raiz1=(-b) /(2*a);
		cout << "\nRaiz unica=\n" << raiz1;
	}else if (delta>0){
		
		raiz1=(-b) + sqrt(delta)/(2*a);
		raiz2=(-b) - sqrt(delta)/(2*a);
		
		cout<< "\nRaiz de x1=" << raiz1 << "\nRaiz de x2=" << raiz2;
		
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	


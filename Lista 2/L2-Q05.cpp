/*Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio e
calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de
aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
C�DIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 T�cnico 30% */


#include <iostream>
using namespace std;

int main(){
	
	float salario, novoSalario;
	int codigo;
	
	cout<< " Digite o seu salario e o codigo do seu cargo:\n";
	cin >> salario >> codigo;
	
	switch(codigo){
		
		case 101: 
			novoSalario=(salario*0.1)+salario;
			cout<< "O seu salario ira sair de R$ "<<salario<< " para R$ " << novoSalario << " e a diferenca de valor e "<< novoSalario-salario;
		break;
		
		case 102:
			novoSalario=(salario*0.2)+salario;
			cout<< "O seu salario ira sair de R$ "<<salario<< " para R$ " << novoSalario << " e a diferenca de valor e "<< novoSalario-salario;
		break; 
		
		case 103:
			novoSalario=(salario*0.3)+salario;
			cout<< "O seu salario ira sair de R$ "<<salario<< " para R$ " << novoSalario <<" e a diferenca de valor e "<< novoSalario-salario;
		break;
		
		default:
			novoSalario=(salario*0.4)+salario;
			cout<< "O seu salario ira sair de R$ "<<salario<< " para R$ " << novoSalario<< " e a diferenca de valor e "<< novoSalario-salario;
		}
		
	}
	
	
	
	
	


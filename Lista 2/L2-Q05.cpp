/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
aumento. Mostre o salário antigo, o novo salário e a diferença.
CÓDIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30% */


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
	
	
	
	
	


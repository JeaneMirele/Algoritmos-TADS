/*A escola �APRENDER� faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que calcule
e escreva o sal�rio de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
Professor n�vel 1 R$ 12,00 por hora aula
Professor n�vel 2 R$ 17,00 por hora aula
Professor n�vel 3 R$ 25,00 por hora aula */

#include <iostream>
using namespace std;


int main (){
	
	int nivel, hora;
	float salario;
	
	cout<< "Digite o nivel do seu cargo, e as suas horas trabalhadas por semana:\n";
	cin>> nivel>>hora;
	
	switch(nivel){
		
		case 1: 
			salario= 4*(hora*12);
			cout<< "Seu salario e:" << salario<< "\n" ;
		break;
		
		case 2: 
			salario= 4*(hora*17);
			cout<< "Seu salario e:" << salario << "\n";
		break;
		
		case 3:
			salario= 4*(hora*25);
			cout<< "Seu salario e:" << salario << "\n";
		break;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	







/*16. Leia a idade de uma pessoa e escreva se ela j� tem idade para tirar carteira de habilita��o (18 anos 
completos) ou n�o. Se n�o tiver idade, escreva tamb�m quantos anos faltam para que possa tirar a 
carteira.*/


#include <iostream>
using namespace std;

int main (){
	
	
	int idade, idaderestrita=18, anos;
	
	cout<< " \n Digite sua idade:\n";
	cin >> idade;
	
	if(idade>=18){
		cout<< "\nVoce ja pode tirar sua habilitacao!\n";
		
	}else{
		cout<<"\nVoce ainda nao pode tirar sua habilitacao!\n";
		anos=idade-idaderestrita;
		cout<< "Ainda faltam" << anos << " para tirar sua habilitacao!";
	}
	
	
	
}

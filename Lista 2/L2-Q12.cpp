/*12. Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

#include <iostream>
using namespace std;

int main(){
	
	int idade, tempoServ;
	
	cout<< "Digite sua idade e tempo de servico\n";
	cin >> idade >> tempoServ;
	
	if(idade>=65 || tempoServ>30){
		cout<< "Voce ja pode se aposentar!\n";
		
	}else if(idade>=60 && tempoServ>=25){
		cout<< "Voce ja pode se aposentar!/n";
		
	}else{
		cout <<"Voce ainda nao pode se aposentar\n";
	
	}
	
	
	
	
	
	
	
	
	
	
	
}

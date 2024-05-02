
/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso 
em horas, minutos e segundos.*/

/*entrada:em segundos; ok
processamento: transformar em horas, minutos, segundos;ok
saída: exibir em horas minutos e segundos pro user;*/


#include <iostream>

using namespace std;

int main(){
	
	int horas, segundos, minutos, totalsegundos;
	
	cout<< "Quantos segundos tem seu evento?\n";
	cin>> totalsegundos;
	
	
	horas=totalsegundos/3600;
	minutos= (totalsegundos%3600)/60;
	segundos= (totalsegundos%3600)%60;
	
	cout<< "Seu evento durara " << horas << "hora," << minutos << "minutos,"<< segundos << "segundos.";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

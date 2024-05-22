/*Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o 
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois 
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10. */

#include <iostream>
using namespace std;

int main(){
	
	int val1, val2, val3;
	
	cout << "Digite 2 valores inteiros para trocar seus conteudos:\n";
	cin >> val1 >> val2;
	
	val3=val1;
	val1=val2;
	val2=val3;
	
	
	//val3 = variavel auxiliar para guardar o valor da primeira variavel;
	
	cout<< "O valor dos conteudos e:"<< val1 << " e " << val2;
	
	
	
	
	
	
	
	
	
	
	
	
	
}

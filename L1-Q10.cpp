/* Leia dois valores inteiros para as vari�veis A e B e efetue as opera��es de adi��o, subtra��o, 
multiplica��o e divis�o de A por B, apresentando ao final os resultados obtidos. Em seguida leia 
dois valores l�gicos C e D e efetue as opera��es de nega��o (de cada um dos valores), conjun��o 
(E) e disjun��o (OU), apresentando ao final os resultados obtidos.*/

#include <iostream>
using namespace std;

int main(){
	
	int A, B, soma, sub, mult, negacaoC, negacaoD, conjuncao, disjuncao;
	bool C, D;
	double div;
	
	cout << " Digite 2 valores inteiros para A e B:\n";
	cin >> A >> B;
	
	soma= A+B;
	sub= A-B;
	mult= A*B;
	div= A/B;
	
	cout << "A soma de A e B:" << soma << "\n" << "A subtracao de A e B:" << sub << "\n" << "A multiplicacao de A por B:" << mult << "\n"
	<< "A divisao de A por B:\n"<< div<< "\n";
	
	cout << " Digite dois valores para C e D, OBS: so podera escolher entre 1 ou 0!\n";
	cin >> C >> D;
	
	negacaoC= (!C);
	negacaoD= (!D);
	conjuncao= (C&&D);
	disjuncao= (C||D);
	
	cout<< "Negacao de C:"<< negacaoC << "\n"<< "Negacao de D:"<< negacaoD << "\n" << "conjuncao de C e D:"<< conjuncao<< "\n"<< 
	"disjuncao de C e D:"<< disjuncao;	
	
}



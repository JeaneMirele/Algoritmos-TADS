/*A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10,
respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia
das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; Avalia��o
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno est� reprovado (media
entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado. */

#include <iostream>
using namespace std;

int main(){
	
	float trabalho=0, avaliacao=0, exame=0, media=0;
	
	cout<< " Digite a nota do aluno, do trabalho de laboratorio:\n";
	cin >> trabalho;
	
	cout << " Digite a nota da avaliacao\n";
	cin >> avaliacao;
	
	cout << " Digite a nota do exame final\n";
	cin >> exame;
	
	media= ((trabalho*2) + (avaliacao*3) + (exame*5))/10;
	
	if(media>0 && media<2.9){
		cout<<"Aluno reprovado\n";
		
	}else if (media>=3 && media<4.9){
		cout << "Aluno de recuperacao\n";
	}else{
		cout<< "Aluno aprovado por media\n";
	}	
}










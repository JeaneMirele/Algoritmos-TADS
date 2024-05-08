/*A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média
das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. */

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










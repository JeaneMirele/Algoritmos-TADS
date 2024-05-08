/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Masculino = (72,7 x altura) - 58
• Feminino = (62,1 x altura) - 44,7 */

#include <iostream>
using namespace std;

int main(){
	
	float altura, pesoM, pesoF;
	char genero;
	
	cout<< " Digite sua altura e genero (m para masculino e f para feminino):\n";
	cin >> altura >> genero;
	
	pesoM=(72.7*altura)-58;
	pesoF=(62.1*altura)-44.7;
	
	if(genero=='m'){
		cout<< " Seu peso ideal e:"<< pesoM;
	}else{
		cout << "Seu peso ideal e:"<< pesoF;
	}
	
	
}

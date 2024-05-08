#include <iostream>

using namespace std;

int main(){
	int qtdSanduiche = 0, qtdBebidas = 0, codigoSanduiche, codigoBebida, resSanduiche, resBebida;
	
	double valorSanduiche, valorBebida, totalCompras;
	
	bool temSanduiche = false, temBebida = false;
	
	string descricaoSanduiche, descricaoBebida;
	
	cout << "Digite o codigo do sanduiche: ";
	cin >> resSanduiche;
	if(resSanduiche > 99 && resSanduiche < 105){
		codigoSanduiche = resSanduiche;
		temSanduiche = true;
	}else{
		cout << endl << "Codigo do sanduiche n�o foi encontrado!";
	}
	cout << "Digite o codigo da bebida: ";
	cin >> resBebida;
	if(resBebida > 104 && resBebida < 108){
		temBebida = true;
		codigoBebida = resBebida;
	}else{
		cout << endl << "Codigo da bebida n�o foi encontrado!";
	}
	if(temSanduiche || temBebida){
		switch(codigoSanduiche){
			case 100:
				valorSanduiche = 1.10;
				descricaoSanduiche = "Cachorro quente";
				break;
			case 101:
				valorSanduiche = 1.30;
				descricaoSanduiche = "Bauru simples";
				break;
			case 102:
				valorSanduiche = 1.50;
				descricaoSanduiche ="Bauru com ovo";
				break;
			case 103:
				valorSanduiche = 1.10;
				descricaoSanduiche ="Hamburger";
				break;
			case 104:
				valorSanduiche = 1.30;
				descricaoSanduiche ="Cheesburger";
				break;
			default:
				valorSanduiche = 0;
				descricaoSanduiche = "Nenhum sanduiche informado!";
		}
		switch(codigoBebida){
			case 105:
				valorBebida = 1.0;
				descricaoBebida = "Refrigerante ";
				break;
			case 106:
				valorBebida = 2.0;
				descricaoBebida = "Suco ";
				break;
			case 107:
				valorBebida = 1.50;
				descricaoBebida = "Nescau";
				break;
			default:
				valorBebida = 0;
				descricaoBebida = "Nenhuma bebida informada!";
		}
		if(temBebida){
			cout << endl << "Quantidade de: " << descricaoBebida;
			cin >> qtdBebidas;
		}
		if(temSanduiche){
			cout << endl << "Quantidade de: " << descricaoSanduiche;
			cin >> qtdSanduiche;
		}
		totalCompras = (valorSanduiche * qtdSanduiche) + (valorBebida * qtdBebidas);
	}else {
		cout << endl << "Voc� n�o tem produtos a serem calculados";
	}
	if(totalCompras == 0){
		cout << endl << "Voc� n�o efetuou nenhuma compra!";
	}else {
		cout << endl << "O total da sua compra deu: " << totalCompras << "R$";
	}
	return 0;
	
	}

/*20. Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos
pagam R$ 100 mais um adicional conforme a seguinte tabela:
• Crianças com menos de 10 anos pagam R$80;
• Conveniados com idade entre 10 e 30 anos pagam R$50;
• Conveniados com idade entre 31 e 60 anos pagam R$ 95;
• Conveniados com mais de 60 anos pagam R$130.*/

#include <iostream>
using namespace std;

int main(){

int idade;

    cout<< "\nDigite sua idade:\n";
    cin>>idade;

    if(idade<10){
        cout<< "O valor a ser pago pelo plano de saude sera R$ 80\n";
    }else if (idade>=10 && idade<=30){
        cout<< "O valor a ser pago pelo plano de saude sera R$ 50\n";
    }else if(idade>=31 && idade<=60){
        cout<< "O valor a ser pago pelo plano de saude sera R$ 95\n";
    }else if(idade>60){
        cout<< "O valor a ser pago pelo plano de saude sera R$ 130\n"; 
    }
}
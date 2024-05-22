/*18. Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar,
verifique e escreva se o parcelamento foi com juros ou se foi sem juros. */

#include <iostream>
using namespace std;

int main(){

double valorT, valorP;
int quantidade;

    cout<< "\nDigite o valor total da sua compra, o valor da parcela, e a quantidade de parcelas a pagar:\n";
    cin>> valorT >> valorP >> quantidade;

    if(valorP*quantidade==valorT){
        cout<<"Sua compra foi feita em" << quantidade << "x sem juros.";
    }else{
        cout<<"Sua compra foi feita em "<< quantidade << "x com juros";
    }

}
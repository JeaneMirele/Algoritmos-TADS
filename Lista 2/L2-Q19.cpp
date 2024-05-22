/*19. Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente
ao dia. Considere que domingo é o dia 1 e sábado é o dia 7. */

#include <iostream>
using namespace std;

int main(){

int dia;

cout<< "\nDigite um numero para o dia da semana (Considere que domingo e o dia 1 e sabado e o dia 7)\n";
cin>> dia;

    if(dia>=2 && dia<=6){
        cout<<"\nDia util\n";
    }else if(dia==6 || dia==7){
        cout<< "\nFim de semana\n";
    }else{
        cout<<"\nDia invalido\n";
    }

}
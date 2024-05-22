/*17. Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo
de 10; se for ímpar, escreva se é divisível por 5. */

#include <iostream>
using namespace std;

int main(){

int num;

    cout<<"\n Digite um numero qualquer:\n";
    cin>> num;

    if(num%2==0){
    if(num%10==0){
        cout<<"\nE multiplo de 10\n";
    }else{
        cout<<"\nNao e multiplo de 10";
    }

        }else{
            if(num%5==0){
              cout<<"\nE divisivel por 5\n";
                 }else{
                     cout<<"\nNao e divisivel por 5\n";
                 }
    }
}




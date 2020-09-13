/*
Faça uma função que recebe um número inteiro por parâmetro e retorna verdadeiro se for par e falso
se for ímpar 
*/

#include <iostream>

using namespace std;

bool imparPar(int numero){
    if(numero % 2 == 0)
        return true;
    else
        return false;
}

int main(){
    int numeroSolicitado;

    cout << "Informe um numero: ";
    cin >> numeroSolicitado;

    cout << "O numero informado eh par?(True = 1/ False = 0): " << imparPar(numeroSolicitado);

    return 0;
}
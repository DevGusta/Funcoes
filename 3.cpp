/*
Crie uma função que recebe como parâmetro um número inteiro e retorna o seu dobro. 
*/

#include <iostream>

using namespace std;

int dobraNumero(int numero){
    return numero * 2;
}

int main(){
    int numeroSolicitado;

    cout << "Digite um numero inteiro: ";
    cin >> numeroSolicitado;

    cout << "O dobro do numero digitado eh " << dobraNumero(numeroSolicitado);

    return 0;
}
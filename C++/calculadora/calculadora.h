#ifndef calculadora_h
#define calculadora_h

#include <iostream>

using namespace std;

int Menu(){
    int operacao;
    cout << "Calculadora: 1 - Adicao 2 - Subtracao 3 - Multiplicacao 4 - Divisao 5 - Sair do programa" << endl;
    cout << "Selecione sua opcao: ";
    cin >> operacao;

    return operacao;
}

float adicao(float numero1 , float numero2){
    return numero1 + numero2;
}

float subtracao(float numero1 , float numero2){
    return numero1 - numero2;
}

float multiplicacao(float numero1 , float numero2){
    return numero1 * numero2;
}

float divisao(float numero1 , float numero2){
    return numero1 / numero2;
}

#endif
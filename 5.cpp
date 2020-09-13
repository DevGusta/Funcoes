/*
Escreva um programa que leia o raio de um círculo e faça duas funções: uma função chamada area
que calcula e retorna a área do círculo e outra função chamada perimetro que calcula e retorna o
perímetro do círculo.
1. Área = π * r2
2. Perímetro = π * 2 * r 
*/

#include <iostream>

using namespace std;

float area(float raio){
    return 3.14 * raio * raio;
}

float perimetro(float raio){
    return 3.14 * 2 * raio;
}

int main(){
    float raioCirculo;

    cout << "Informe a area do circulo: ";
    cin >> raioCirculo;

    cout << "A area do circulo eh: " << area(raioCirculo) << endl;
    cout << "O perimetro do circulo eh: " << perimetro(raioCirculo);

    return 0;
}
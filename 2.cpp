/*
Faça uma função que receba como parâmetro o número de lados de um polígono e:
1. Se o número de lados for igual a 3, escrever TRIÂNGULO.
2. Se o número de lados for igual a 4, escrever QUADRADO.
3. Se o número de lados for igual a 5, escrever PENTÁGONO.
4. Se o número de lados for diferente de 3, 4 ou 5, escrever VALOR INVÁLIDO. 
*/

#include <iostream>

using namespace std;

string definePoligono(int lados){
    switch(lados){
        case 3:
            return "TRIANGULO";
            break;
        case 4:
            return "QUADRADO";
            break;
        case 5:
            return "PENTAGONO";
            break;
        default:
            return "VALOR INVALIDO";
            break;
    }
}

int main(){
    int numeroLados;

    cout << "Informe o numero de lados do poligono: ";
    cin >> numeroLados;

    cout << definePoligono(numeroLados);

    return 0;
}
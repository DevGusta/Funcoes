/*
Escreva um programa para ler as notas de duas provas. Faça uma função que receba as duas notas
por parâmetro e calcula a média destes valores. Depois disso o programa deve exibir a mensagem
“Você foi Aprovado!” ou “Você foi Reprovado!”. Esta operação de escrita também deve estar em uma
função. Considere 6.0 a média mínima para aprovação.
*/

#include <iostream>

using namespace std;

float calculaMedia(float nota1, float nota2){
    return (nota1 + nota2)/2; 
}

string mensagem(float media){
    if (media >= 6.0)
        return "Voce foi aprovado.";
    else
        return "Voce foi reprovado.";
}

int main(){
    float n1, n2;
    
    cout << "Digite sua primeira nota: ";
    cin >> n1;

    cout << "Digite sua segunda nota: ";
    cin >> n2;

    cout << mensagem(calculaMedia(n1, n2));

    return 0;
}   



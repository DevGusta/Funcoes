#include "calculadora.h"
#include <iostream>

using namespace std;

int main(){
    float n1, n2;
    int operacao;
    
    do{
        operacao = Menu();
        switch(operacao){
            case 1:
                cout << "Informe o primeiro numero: ";
                cin >> n1;
                cout << "Informe o segundo numero: ";
                cin >> n2;

                cout << "O resultado eh: " << adicao(n1 , n2) << endl;
                break;
            case 2:
                cout << "Informe o primeiro numero: ";
                cin >> n1;
                cout << "Informe o segundo numero: ";
                cin >> n2;

                cout << "O resultado eh: " << subtracao(n1 , n2) << endl;
                break;
            case 3:
                cout << "Informe o primeiro numero: ";
                cin >> n1;
                cout << "Informe o segundo numero: ";
                cin >> n2;

                cout << "O resultado eh: " << multiplicacao(n1 , n2) << endl;
                break;
            case 4:
                cout << "Informe o primeiro numero: ";
                cin >> n1;
                cout << "Informe o segundo numero: ";
                cin >> n2;

                cout << "O resultado eh: " << divisao(n1 , n2) << endl;
                break;
        }
    }while(operacao != 5);
    return 0;
}

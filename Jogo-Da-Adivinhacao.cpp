#include <iostream>
using namespace std; 

int main (){
    cout << "************************************" << endl;
    cout << "* BEM-VINDO AO JOGO DA ADIVINHAÇÃO *" << endl;
    cout << "************************************" << endl;

    int numero_secreto = 90;
    cout << "O numero secreto eh " << numero_secreto << ". Nao conte para ninguem!" << endl;

    int chute;
    cout << "Qual o seu chute?" ;
    cin >> chute;

    cout << "O valor do seu chute eh: " << chute << endl;

    if(chute == numero_secreto){
        cout << "Parabéns! Você acertou o número secreto!" <<endl;
    }
}
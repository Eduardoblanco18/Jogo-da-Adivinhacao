#include <iostream>
using namespace std; 

int main (){
    cout << "************************************" << endl;
    cout << "* BEM-VINDO AO JOGO DA ADIVINHAÇÃO *" << endl;
    cout << "************************************" << endl;

    const int NUMERO_SECRETO = 90;

    int chute;
    bool acertou, maior;

    do{  
        cout << "Qual o seu chute?" ;
        cin >> chute;

        cout << "O valor do seu chute é: " << chute << endl;

        acertou = chute == NUMERO_SECRETO;
        maior = chute > NUMERO_SECRETO;

        if(acertou){
            cout << "Parabéns! Você acertou o número secreto!" <<endl;
        }
        else if(maior){
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    } while(!acertou);
}
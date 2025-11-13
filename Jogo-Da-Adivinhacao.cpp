#include <iostream>
using namespace std; 

int main (){
    cout << "************************************" << endl;
    cout << "* BEM-VINDO AO JOGO DA ADIVINHAÇÃO *" << endl;
    cout << "************************************" << endl;

    const int NUMERO_SECRETO = 90;

    int chute, tentativas = 0;
    bool acertou, maior;

    double pontos = 1000.0;

    do{  
        tentativas++;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual o seu chute?" ;
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos= pontos - pontos_perdidos;

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

    cout << "Fim de jogo!"<< endl;
    cout << "Você acertou o número secreto em " << tentativas << " tentativas!"<< endl;
    cout << "Sua pontiação foi de " << pontos << " pontos!" << endl;
}
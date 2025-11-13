#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main (){
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() %100 + 1;
    int chute, tentativas = 0, numeros_de_tentativas;
    char dificuladade;
    bool acertou, maior;
    double pontos = 1000.0;

    cout << "************************************" << endl;
    cout << "* BEM-VINDO AO JOGO DA ADIVINHAÇÃO *" << endl;
    cout << "************************************" << endl;

    cout << "Escolha seu nível de dificuldade:" << endl;
    cout << "Fácil (F), Médio (M), Difícil (D)" << endl;

    cin >> dificuladade;

    if(dificuladade == 'F'){
        numeros_de_tentativas = 15;
    } else if (dificuladade == 'M') {
        numeros_de_tentativas = 10;
    } else {
        numeros_de_tentativas = 5;
    }

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
    } while((!acertou)&&(tentativas < numeros_de_tentativas));

    cout << "Fim de jogo!"<< endl;
    if(!acertou){
        cout << "Você perdeu! Tente novamente!" << endl;
    } else{
        cout << "Você acertou o número secreto em " << tentativas << " tentativas!"<< endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontiação foi de " << pontos << " pontos!" << endl;
    }
}
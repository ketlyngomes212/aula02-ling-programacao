#include <stdio.h>
#include <stdlib.h>

int main() {
    int pont_inicial, pont_final; // declara as variaveis

    printf("\n=== PROG DE PONTUAÇÃO ===\n");
    printf("Digite a pontuação inicial do jogador: ");
    scanf("%d", &pont_inicial); // usuario digita a pont inicial 

    if (pont_inicial < 0) { // se a pont incial for negativa entao ele encerra o prog
        printf("A pontuacao inicial deve ser positiva!\n");
        return 0; // encerra o prog
    }

    pont_final = pont_inicial;

    pont_final += 50; // adicona 50 pontos a pont_final
    printf("Jogador ganhou uma fase, a pontuação é de: %d pontos\n", pont_final); // mostra a nova pont apos a adição

    pont_final *= 2; // multiplica 2 vezes os pontos da pont_final
    printf("Jogador coletou um item especial, a pontuação é de: %d pontos\n", pont_final);    

    pont_final -= 30; // diminui 30 pontos da pont_final
    printf("Jogador perdeu vida, a pontuação é de: %d pontos\n", pont_final);
   
    pont_final += 15; // adicona 15 pontos a pont_final
    printf("Jogador ganhou um bonus de tempo, a pontuação é de: %d pontos\n", pont_final);   

    pont_final /= 3; //divide por 3 os pontos da pont_final
    printf("Jogador recebeu uma penalidade por dificuldade, a pontuação é de: %d pontos\n", pont_final);

    pont_final += 100; // adicona 100 pontos a pont_final
    printf("Jogador ganhou um bonus final, a pontuação é de: %d pontos\n", pont_final); 

    printf("\n=== RESULTADO ===\n");
    printf("Sua pontuação inicial era de: %d pontos\n", pont_inicial); //mostra a pont inicial
    printf("Sua pontuação final é: %d pontos\n", pont_final); // mostra a pont final
    printf("Diferença de pontos: %d\n",  pont_final - pont_inicial); // mostra a diferença da pont_final da pont_inicial

    return 0;
}

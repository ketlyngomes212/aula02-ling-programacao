#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, nota3, media, freq; // declarar variaveis
    char conceito;

    printf("Digite a primeira nota (de 0 a 10): "); 
    scanf("%f", &nota1); // lê 1 nota
  
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // lê 2 nota
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3); // lê 3 nota
    
    printf("Digite a frequência do aluno (de 0 a 100): ");
    scanf("%f", &freq); // lê a frequencia
    
    if ((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10) || (nota3 < 0 || nota3 > 10)) { // verifica se as notas são maiores que 10 ou menores que 0
        printf("Os valores das notas estão invalidos"); 
        return 0; //encerra o programa
    }

    if (freq < 0 || freq > 100){ // verifica se a freq é maior que 100 ou menor que 0
        printf("A frequência está invalida.");
        return 0; // encerra o prog
    }

    media = (nota1 + nota2 + nota3)/3; // calcula a media

    if (media >= 9.0){ // se a media estiver entre 100 e 90 o conceito é 'A'
        conceito = 'A';
    } else if (media >= 7.0) { // se media estiver entre 89 e 70 o conceito é 'B'
        conceito = 'B';
    } else if (media >= 5.0) { // se a media estiver entre 69 e 50 o conceito é 'C'
        conceito = 'C';
    } else {
        conceito = 'D'; // se for menor que 49 (nenhuma das opções acima) o conceito é 'D'
    }

    printf("A media final foi de: %.2f\n", media); // mostra a media
    printf("O conceito obtido: %c\n", conceito); // mostra o conceito

    if (media >= 5.0 && freq >= 75) { // se a media for maior ou igual a 50 e a frequencia maior ou igual a 75, então ele foi aprovado
        printf("Status: Aprovado!\n");
    } else if (media < 5.0 && freq < 75) { //se a media for menor que 50 e a frequencia menor que 75, então ele foi reprovador por nota e frequencia
        printf("Status: Reprovado por nota e frequencia.\n");
    } else if (media < 5.0) { // se a media for menor que 50 (independente da freq) ele foi reprovado por nota
        printf("Status: Reprovado por nota.\n");
    } else {
        printf("Status: Reprovado por frequencia.\n"); // se a freq for menor que 75 (nenhuma das opções acima) e independete da nota ele foi reprovado por freq
    }

    return 0;

}

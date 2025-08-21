#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc; // declara variaveis
    int idade;
    char sexo;

    printf("\n=== CALCULO DE IMC==\n");
    printf("Digite seu peso: ");
    scanf("%f", &peso); // lê peso
    printf("Digite sua altura: ");
    scanf("%f", &altura); // lê altura
    printf("Digite sua idade: ");
    scanf("%d", &idade); // lê idade
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo); // lê sexo

    if (peso <= 0 || altura <= 0 || idade <= 0 || (sexo != 'M' && sexo != 'F')) {
        printf("Erro: dados invalidos!\n");
        return 0; // valida os dados
    }

    imc = peso / (altura*altura); // calcula o imc
    printf("Imc: %2.f\n", imc); // mostra o imc

    if (imc < 18.5){  // se o imc for abaixo de 18.5
        printf("Classificação: abaixo do peso.\n"); 
    } else if (imc < 25.0) { // se for entre 18.5 e 25
        printf("Classificação: peso normal\n");
    } else if (imc < 30.0) { // se for entre 25 e 30
        printf("Classificação: Sobrepeso\n"); 
    } else if (imc < 35.0) { // se for entre 30 e 35
        printf("Classificação: Obesidade grau I\n");
    } else if (imc < 40.0) { // se for entre 35 e 40
        printf("Classificação: Obesidade grau II\n");
    } else { // se for acima de 40
        printf("Classificação: Obesidade grau III\n");
    }


    if((sexo == 'M') && ( imc == 25.0)){ // se for homem e imc igual a 25
         printf("Recomendacao: Praticar exercicios de forca.\n");
    } else if ((sexo == 'F') && (imc >= 25.0)) { // se for mulher e imc igual a 25
        printf("Recomendacao: Praticar exercicios aerobicos.\n");   
    }
    
    if ((idade >= 60) && (imc < 18.5)) {  // se for mais velho ou iggual a 60 e imc abaixo de 18.5
        printf("Recomendacao: Consultar um geriatra.\n");
    }
    if ((idade <= 25) && (imc >= 30.0)) { // se for mais novo ou tem idade igual a 25 e imc acima ou igual a 30
        printf("Recomendacao: Procurar um nutricionista.\n");
    }

    return 0;
}

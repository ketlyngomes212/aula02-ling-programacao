#include <stdio.h>
#include <stdlib.h>

// Funcao para consultar saldo
void Ver_saldo(float saldo) {
    printf("\nO seu saldo atual é de R$ %.2f\n", saldo);
}

// funcao para fazer depositos
float deposito(float saldo) {
    float valor;
    printf("\nDigite o valor do depósito: ");
    scanf("%f", &valor);

    if (valor >= 0.01) { // verifica se o saldo não é  negativo
        saldo += valor; // adiciona o valor no saldo
        printf("Depósito realizado! Saldo atual: R$ %.2f\n", saldo);
    } else {
        printf("Valor de depósito inválido.\n");
    }
    return saldo;
}

// funcao para realizar saque
float saque(float saldo) {
    float saque;
    printf("\nDigite o valor do saque: ");
    scanf("%f", &saque);

    if (saque < 0 || saque > 500) { // tem que ser entre entre 1 e 500
        printf("Valor inválido, saque máximo de R$ 500.00.\n");
    } else if (saque > saldo) { // tem que ser menor que o saldo
        printf("Saldo insuficiente.\n");
    } else {
        saldo -= saque; // realiza o saque
        printf("Saque realizado! Saldo atual: R$ %.2f\n", saldo);
    }
    return saldo;
}

// funcao de transferencia
float transferencia(float saldo) {
    float trans, taxa;
    printf("\nDigite o valor da transferência: ");
    scanf("%f", &trans);

    if (trans <= 0) { // tem que um numero positivo
        printf("Valor de transferência inválido.\n");
    } else {
        taxa = trans * 0.01; // calcula a taxa
        if (taxa < 2.0) { // se a taxa for menor que 2 reais
            taxa = 2.0; //  arredonda para a taxa mínima
        }

        if (trans + taxa > saldo) { // tem que ser menor que o saldo
            printf("Saldo insuficiente para a transferência.\n");
        } else {
            saldo -= (trans + taxa); //retira o valor da transferencia
            printf("Transferência de R$ %.2f realizada (taxa: R$ %.2f).\n", trans, taxa);
            printf("Saldo atual: R$ %.2f\n", saldo);
        }
    }
    return saldo;
}


int main() {
    float saldo = 1000.0;
    int opcao;

    do {
        printf("\n=== CAIXA ELETRÔNICO ===\n");
        printf("[1] Consultar saldo\n");
        printf("[2] Realizar depósito\n");
        printf("[3] Realizar saque\n");
        printf("[4] Transferência entre contas\n");
        printf("[5] Sair do sistema\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            Ver_saldo(saldo); // mostra saldo
        } else if (opcao == 2) {
            saldo = deposito(saldo); // realiza deposito
        } else if (opcao == 3) {
            saldo = saque(saldo); // realiza saque
        } else if (opcao == 4) {
            saldo = transferencia(saldo); // realiza transferencia
        } else if (opcao == 5) {
            printf("\nVocê saiu do sistema.\n");
        } else {
            printf("\nOpção inválida.\n");
        }

    } while (opcao != 5);

    return 0;
}

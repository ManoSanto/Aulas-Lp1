/**
 * @file main.c
 * @author Diogo Espírito Santo (7b10diogosanto@gmail.com)
 * @brief soma, subtracao, multiplicacao, divisao, numero1, numero2
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Declaração de variaveis
    float soma, subtracao, multiplicacao, divisao, numero1, numero2;

    //Entrada de dados 
    printf("introduza o primeiro numero: ");
    scanf("%f", &numero1);
    printf("introduza o segundo numero: ");
    scanf("%f", &numero2);

    //Calculo das 4 operações matemáticas e saída de dados
    soma = numero1 + numero2;
    printf("Soma: %.1f\n", soma);

    subtracao = numero1 - numero2;
    printf("subtracao: %.1f\n", subtracao);

    multiplicacao = numero1 * numero2;
    printf("multiplicacao: %.1f\n", multiplicacao);

    divisao = numero1/numero2;
    printf("divisao: %.1f", divisao);

    return 0;
}
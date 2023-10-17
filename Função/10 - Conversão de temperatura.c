#include <stdio.h>

int main() {
    char escolha;
    float temperatura, resultado;

    printf("Escolha a opção de conversão:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("Digite 1 ou 2: ");
    scanf(" %c", &escolha);

    switch (escolha) {
        case '1':
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = (9.0 * temperatura / 5.0) + 32;
            printf("A temperatura em Fahrenheit é: %.2f\n", resultado);
            break;
        case '2':
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = 5.0 * (temperatura - 32) / 9.0;
            printf("A temperatura em Celsius é: %.2f\n", resultado);
            break;
        default:
            printf("Escolha inválida.\n");
    }

    return 0;
}

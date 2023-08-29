
#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido!\n");
        return 1;
    }

    printf("O peso ideal é: %.2f kg\n", peso_ideal);

    return 0;
}
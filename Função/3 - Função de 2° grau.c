#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c);
void raizesReais(float a, float b, float delta);
void raizesComplexas(float a, float b, float delta);

int main() {
    float a, b, c;
    
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("O coeficiente 'a' deve ser diferente de zero para uma equação do 2º grau.\n");
        return 1;
    }
    
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
    
    calcularRaizes(a, b, c);

    return 0;
}

void calcularRaizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    
    if (delta >= 0) {
        raizesReais(a, b, delta);
    } else {
        raizesComplexas(a, b, delta);
    }
}

void raizesReais(float a, float b, float delta) {
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raízes reais são: %.2f e %.2f\n", x1, x2);
}

void raizesComplexas(float a, float b, float delta) {
    float realPart = -b / (2 * a);
    float imaginaryPart = sqrt(-delta) / (2 * a);
    printf("As raízes complexas são: %.2f + %.2fi e %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
}

#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);

int main() {
    float a, b, c, res;
    printf("Digite três valores: ");
    scanf("%f%f%f", &a, &b, &c);
    res = delta(a, b, c);
    printf("O valor de Delta (Δ) é: %f\n", res);
}

float delta(float a, float b, float c) {
    return (b * b) - (4 * fabs(a) * fabs(c));
}



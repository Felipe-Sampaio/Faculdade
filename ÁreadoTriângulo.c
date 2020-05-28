#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, a2, a3, area, resultado;
    setlocale(LC_ALL, "Portuguese");

    printf("Digíte a primeira àrea do triângulo: ");
    scanf(" %d", &a);

    printf("Digíte a segunda área do triângulo: ");
    scanf(" %d", &a2);

    printf("Digíte a terceira área do triângulo: ");
    scanf(" %d", &a3);

    area = (a + a2 + a3) / 2;

    resultado = sqrt(area * (area - a) * (area - a2) * (area - a3));

    printf("A sua área é %d", resultado);

    return 0;
}

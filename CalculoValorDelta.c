#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, b, c, delta;
    setlocale(LC_ALL, "Portuguese");
    printf("Digíte o valor de a: ");
    scanf("%d", &a);

    printf("Digíte o valor de b: ");
    scanf("%d", &b);

    printf("Digíte o valor de c: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4 * a * c;
    printf("O valor de delta é %d", delta);
    return 0;
}

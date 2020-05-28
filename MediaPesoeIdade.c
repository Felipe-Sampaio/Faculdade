#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i1, i2, i3;
    float p1, p2, p3;
    float rp;
    int ri;
    printf("Digíte o peso da 1º pessoa: ");
    scanf("%f", &p1);
    printf("Digíte a idade da 1º pessoa: ");
    scanf("%d", &i1);

    printf("Digíte o peso da 2º pessoa: ");
    scanf("%f", &p2);
    printf("Digíte a idade da 2º pessoa: ");
    scanf("%d", &i2);

    printf("Digíte o peso da 3º pessoa: ");
    scanf("%f", &p3);
    printf("Digíte a idade da 3º pessoa: ");
    scanf("%d", &i3);

    ri = (i1 + i2 + i3) / 3;
    rp = (p1 + p2 + p3) / 3;

    printf("A média de idade foi %d\n", ri);
    printf("E a média de peso foi %.2f", rp);
    return 0;

}

#include <stdio.h>
#include <locale.h>

int main()
{
    float n1, n2, media;
    setlocale(LC_ALL, "Portuguese");

    printf("|_______|Exercício 7|_______|");

    printf("\nDigite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);

    if (n1 <= 10 && n2 <= 10)
        {
        media = (n1 + n2) / 2;

        printf("A média de %.2f + %.2f é igual a %.2f\n", n1, n2, media);
        }
    else{
        printf("O limite da nota é de 0 a 10, tente novamente!\n");
        }

    printf("________________________________________________");
    return 0;
}

#include <stdio.h>
#include <locale.h>

int main()
{   //Exercício 6
    float pf, pd, i, soma;
    setlocale(LC_ALL, "Portuguese");
    printf("----------|Exercício 6|----------\n");
    printf("Digite o preço de fábrica do carro: ");
    scanf("%f", &pf);
    pd = (pf * 12) / 100;
    i = (pf * 30) / 100;
    soma = pf + pd + i;
    printf("----------------------------\n");
    printf("O custo final encima de todos os impostos sai por %.2fR$", soma);
    return 0;

}

//Faculdade
//Projetos e programas propostos na faculdade

#include <stdio.h>
#include <locale.h>

int main()
{   //Exercicio 1
    float v, t, d;
    setlocale(LC_ALL, "Portuguese");
    printf("---------Exercício 1----------\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nDigite sua velocidade: ");
    scanf(" %f", &v);
    printf("----------------------------");
    printf("\nDigite o tempo: ");
    scanf("%f", &t);
    d = (v * t);
    printf("----------------------------");
    printf("\nVoce andou %.2f métros.\n", d);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return 0;
}


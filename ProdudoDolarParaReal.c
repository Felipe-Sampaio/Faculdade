#include <stdio.h>
#include <locale.h>

int main()
{ //Exercicio 4
    float cotacao, dolar;
    //setlocale(LC_ALL, "Portuguese");
    printf("       ----------|Exercício 4|----------\n");
    printf("-----------------------------------------------\n");
    printf("-------> Digite a cotação do real no momento: ");
    scanf("%f", &cotacao);
    printf("--> Agora digite o valor do produto em DOLAR: ");
    scanf("%f", &dolar);
    printf("\n-----------------------------------------------------------------------\n");
    printf("Seu produto em dolar custava %.2fU$ E convertido para real fica %.2fR$ \n", dolar, dolar * cotacao);
    return 0;
}

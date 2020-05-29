#include <stdio.h>
#include <locale.h>

int main ()

{
    setlocale(LC_ALL, "Portuguese");
    float km, litros, gasto;

    printf("----------|BEM-VINDO-AO-POSTO-7|----------\n");
    printf("Digíte Quantos KM foram rodados: ");
    scanf("%f", &km);

    printf("Agora digíte quantos litros de gasolina foi gasto na viagem: ");
    scanf("%f", &litros);

    gasto = km / litros;

    printf("Sua média de KM por litros é de %.2f", gasto);
    printf("\n----------|OBRIGADO-PELA-PREFERÊNCIA!!----------");
    return 0;
}

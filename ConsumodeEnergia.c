#include <stdio.h>
#include <locale.h>

int main()
{
    /*----- VARIAVEIS -----*/
    float energia, watts, tempo, Etotal, pagamento;
    /*---------------------*/

    //----- SINAIS -----*/
    setlocale(LC_ALL, "Portuguese");

    /*----- PERGUNTAS -----*/
    printf("Digíte sua taxa de consumo de energia: ");
    scanf("%f", &energia);

    printf("Digíte o tempo em horas permanecido ligado: ");
    scanf("%f", &tempo);

    printf("Digíte o valor do quilowatt/H: ");
    scanf("%f", &watts);
    /*---------------------*/

    /*----- CONTAS -----*/
    Etotal = energia * tempo;
    pagamento = Etotal * watts;
    /*------------------*/

    /*----- RESULTADOS -----*/
    printf("Foi gasto %.2f de energia total.\n", Etotal);
    printf("O valor total a ser pago sera de %.2fR$", pagamento);
    return 0;
    /*----------------------*/
}

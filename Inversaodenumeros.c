#include <stdio.h>
#include <locale.h>

int main()

{   char n[3], inverter;
    setlocale(LC_ALL, "Portuguese");

    printf("Digíte um número de 3 digitos: ");
    scanf("%s", &n);
    printf("%c%c%c", n[2], n[1], n[0]);
    return 0;
}

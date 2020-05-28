#include <stdio.h>
#include <locale.h>

int main(){
    //Exercício 3
    int n, ma, me;
    setlocale(LC_ALL, "Portuguese");
    printf("-------Exercício 2-------\n");
    printf("-------------------------\n");
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    me = n - 1;
    ma = n + 1;
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    printf("-----> O sucessor de %d e %d \n", n, ma);
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("-----> E o antecessor de %d e %d \n", n, me);
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    return 0;
}

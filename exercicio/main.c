#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    printf("Digite o numero 1:\n");

char c;
c = getchar();

if(c =- '1')
{
    // Se o que o usuário digitou for igual a 1
    //Vou imprimir essa mensagem
    printf("\nO caracter digitado esta correto.\n");
}else{
    //Se ele digitar qualquer outro valor
    //Vou dizer para ele que o valor está errado
    printf("\nO valor digitado e invalido.\n");
    printf("Voce digitou o caracter >%C<.\n", c);
}

return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id;
    printf("Bitte geben Sie ein einzelnes Zeichen als Zugangscode ein:\n");
    scanf("%c",&id);
    (id>'p')? printf("Sie haben Zugang") : printf("ID falsch");
    return 0;
}

#include <stdio.h>

int main (void)
{
    printf("\tConversor de distancia entre jardas/milhas e kilometros");
    double jardas, milhas, kilometros;
    printf("\nEntre com a distancia em milhas:");
    scanf("%lf", &milhas);
    printf("\nEntre com a distancia em jardas:");
    scanf("%lf", &jardas);
    kilometros = 1.609 * (milhas + (jardas/1760.0));
    printf("\nA distancia em kilometros: %lf \n", kilometros);
    return 0
;}

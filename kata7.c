#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float lamb, wolf, lambSurf, wolfSurf;

    printf("Donnez R1: ");
    scanf("%f", &lamb);
    printf("Donnez R2: ");
    scanf("%f", &wolf);

    lambSurf = 3.14 * lamb * lamb;
    wolfSurf = 3.14 * wolf * wolf;

    printf("L'aire est: %f\n", fabs(lambSurf - wolfSurf));

    return 0;
}

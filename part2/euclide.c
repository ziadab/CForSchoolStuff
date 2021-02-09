#include <stdio.h>

int main()
{
    int camille, kata, rest;

    printf("Gimme 2 numbers: ");
    scanf("%d%d", &camille, &kata);

    // do
    // {
    //     rest = camille % kata;
    //     camille = kata;
    //     kata = rest;
    // } while (rest != 0);

    // printf("PGCD is : %d\n", camille);

    while (rest != 0)
    {
        rest = camille % kata;
        camille = kata;
        kata = rest;
    }

    printf("PGCD is : %d\n", camille);

    return 0;
}
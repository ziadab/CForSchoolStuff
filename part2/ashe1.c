#include <stdio.h>

int main()
{
    int ashe;

    printf("Gimme a number: ");
    scanf("%d", &ashe);

    printf(ashe % 2 ? "impair\n" : "pair\n");

    return 0;
}
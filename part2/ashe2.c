#include <stdio.h>

int main()
{
    int kata, liss, ashe, max, min;

    printf("Gimme the 3 numbers: ");
    scanf("%d%d%d", &kata, &liss, &ashe);

    // Getting max
    max = kata > liss ? kata : liss;
    max = max > ashe ? max : ashe;

    // Getting min
    min = kata > liss ? liss : kata;
    min = min > ashe ? ashe : min;

    printf("\nMax: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
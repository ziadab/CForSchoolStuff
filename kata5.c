#include <stdio.h>

int main()
{
    float camille, yone, yasuo;

    printf("Donnez les 3 notes:\n");
    scanf("%f%f%f", &camille, &yone, &yasuo);
    printf("La moyen est: %0.2f\n", ((camille + yone + yasuo) / 3));

    return 0;
}
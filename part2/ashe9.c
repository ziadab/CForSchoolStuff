#include <stdio.h>

int main()
{

    int start = 10;
    int end = 50;
    int somme = 0;

    for (start; start <= end; start += 5)
    {
        somme = somme + start;
    }

    printf("%d\n", somme);

    return 0;
}
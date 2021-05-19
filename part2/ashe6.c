#include <stdio.h>

int main()
{

    int a, b;
    printf("Gimme a 2 numbers: ");
    scanf("%d%d", &a, &b);

    if (a < 0 && b < 0)
    {
        printf("Numbera is positiva\n");
    }
    else if (a < 0 || b < 0)
    {
        printf("Numbera is negativa\n");
    }
    else if (a == 0 || b == 0)
    {
        printf("Numbera is null\n");
    }
    else
    {
        printf("Numbera is positiva\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{

    char lissandra;

    printf("Donnez une lettre: ");
    scanf("%c", &lissandra);

    printf("The next letter is: %c\n", lissandra + 1);

    return 0;
}
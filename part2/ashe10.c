#include <stdio.h>

int main()
{
    int num, lastDegit, reversed = 0;

    printf("Gimme a number: ");
    scanf("%d", &num);

    printf("Sign: %s\n", (num > 0) ? "possitive" : "negative");

    if (num > 0)
    {
        while (num != 0)
        {
            lastDegit = num % 10;
            reversed = (reversed * 10) + lastDegit;
            num /= 10;
        }

        printf("Reversed number is: %d\n", reversed);
        return 0;
    }
}
#include <stdio.h>

int main()
{
    int num;

    printf("Gimme a whole number: ");
    scanf("%d", &num);

    printf("Dividers are: \n");
    for (int i = 2; i <= num; i++)
    {
        if (!(num % i))
        {
            printf("%d\n", i);
        }
    }
}
#include <stdio.h>

int main()
{

    // int i = 1;

    // while (i <= 9)
    // {
    //     int j = 1;

    //     while (j <= 9)
    //     {
    //         printf("%d\t", i * j);
    //         j++;
    //     }

    //     printf("\n");

    //     i++;
    // }

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
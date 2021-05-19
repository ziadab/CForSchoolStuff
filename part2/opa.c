#include <stdio.h>

int main()
{

    int i, kata;
    i = 0;

    printf("gimme a number: ");
    scanf("%d", &kata);

    // pair (while)
    printf("les nombre pair sont: \n");
    // while (i <= kata)
    // {

    //     if ((i % 2 == 0))
    //     {
    //         printf("%d\n", i);
    //     }

    //     i++;
    // }

    // pair(for)
    for (int i = 0; i <= kata; i++)
    {
        if ((i % 2 == 0))
        {
            printf("%d\n", i);
        }
    }

    // impair
    printf("les nombre impair sont: \n");

    // i = 0;
    // while (i <= kata)
    // {
    //     if ((i % 2) != 0)
    //     {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }

    // impair(for)
    for (int i = 0; i <= kata; i++)
    {
        if ((i % 2 != 0))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
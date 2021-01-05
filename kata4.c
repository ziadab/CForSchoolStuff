#include <stdio.h>

int main()
{
    int kata, neeko, ashe;
    printf("Donnez 2 numbers:\n");
    scanf("%d%d", &kata, &neeko);

    ashe = kata;
    kata = neeko;
    neeko = ashe;

    printf("Num1: %d\nNum2: %d\n", kata, neeko);

    /**
     * 
     * kata = 15
     * neeko = 20
     * ashe = 0
     * 
     * ashe = kata
     * kata = neeko 
     * neeko = ashe
     * 
     * 15
     * 
     * */

    return 0;
}
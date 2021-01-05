#include <stdio.h>

int main()
{
    float kata, ashe;

    printf("Donnez 2 nombres reel: ");
    scanf("%f%f", &kata, &ashe);

    printf("Numbre1: %f\nNumbre2: %f\nProduit: %0.3f\n", kata, ashe, kata * ashe);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char sexe[20];
    int exit = 1;

    while (exit)
    {

        printf("Gimme ur age: ");
        scanf("%d", &age);

        printf("what is ur sexe: ");
        scanf("%s", sexe);

        printf("%s", sexe);

        if (!strcmp(sexe, "M"))
        {
            strcpy(sexe, "masculin");
        }
        else
        {
            strcpy(sexe, "feminin");
        }

        printf("t'est un enfant de l'age %d et ton sexe est %s\n", age, sexe);

        printf("Do you wanna exit if yes type 0 no type 1: ");
        scanf("%d", &exit);
    }

    return 0;
}
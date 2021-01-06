#include <stdio.h>
#include <math.h>

// ALL THE  CREDIT TO ILYAS I'M NOT THE ONE WHO FIGURE IT OUT
// I JUST IMPLEMENT IT

int main()
{

    // well here we just declare a variable called katarina and neeko
    // katarina is my main of league so yikes xD
    // Here is her bio if someone intersted on reading
    // https://universe.leagueoflegends.com/en_US/champion/katarina/
    // https://universe.leagueoflegends.com/en_US/champion/neeko/
    float katarina, neeko;

    // we get the number from user
    printf("Donnez un numbre: ");
    scanf("%f", &katarina);

    // we square root the number
    // here is a documentation for the function
    // https://www.programiz.com/c-programming/library-function/math.h/sqrt
    neeko = sqrt(katarina);

    // now after we get the square root of number
    // it will have a number after comma
    // so we need to get the closet number for the square that we find

    // exemple :
    // sqrt(5) = 2.23606797749979
    // so the closed number for sqrt(5) is 2 from the left and 3 from the right
    // the question is HOW WE CAN GET THEM
    // And for that there is 2 function that do this job

    // ceil and floor
    // ceil is a function always rounds a number up to the next largest integer.
    //      source: (https://www.programiz.com/c-programming/library-function/math.h/ceil)

    // and floor is a function returns the largest integer less than or equal
    //    to a given number.
    //      source: (https://www.programiz.com/c-programming/library-function/math.h/floor)
    int closeLeft, closeRight;

    closeLeft = floor(neeko);
    closeRight = ceil(neeko);

    // after we get the numbers number
    // we just power them by 2 to get the closed Square number (Carré parfait)

    // and bingo we got them UwU
    printf("Le plus proche caree parfait de gauche est: %d\n", (closeLeft * closeLeft));
    printf("Le plus proche caree parfait de droit est: %d\n", (closeRight * closeRight));
}
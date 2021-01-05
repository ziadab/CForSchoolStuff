#include <stdio.h>

/**
 * For this exercice I just basically inpired by thr following article
 * (https://medium.com/@ManBearPigCode/how-to-reverse-a-number-mathematically-97c556626ec6)
 * 
 * 1 - Well for the first step is we need to isolate the last digit in number
 * and to do that we need just to get the rest of the division by 10
 * so it will be lastDegit = number % 10 
 * let take 1234 as exemple
 * so if we Apply the formula up we will get 4 let save that
 * 
 * 2 - Append lastDigit to reverse
 * here I should define the reverse
 * the reverse is basiclly the number that we will get at the end so we will start from 0 up 
 * to the reverse number
 * 
 * let keep that it mind
 * let follow from the past exemple 1234
 * we got 
 *      reserve = 0 and lastDegit = 4
 * so the formola is as the following
 *      reserve = (reserve * 10) + lastDegit
 * We multiply reverse by 10 so that the ones column becomes the tens column
 * the tens column becomes the hundreds column, and so on
 * so we got leaved by the lastDegit added to the ones columns
 * 
 * 3 - Remove last digit from number
 * and for that we will use 
 *      number /= 10
 * basically is as 
 *      number = number / 10
 * 4 - we loop on the number until he become 0
*/

int main()
{
    int number, reversed = 0, lastDegit;

    printf("gimme a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        lastDegit = number % 10;
        reversed = (reversed * 10) + lastDegit;
        number /= 10;
    }

    printf("Reverse number: %d\n", reversed);
    return 0;
}

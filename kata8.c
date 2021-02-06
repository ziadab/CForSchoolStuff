#include <stdio.h>
#include <stdlib.h>

/**
 * Well To solve this problem we have 4 options
 * 1 - using the math equation : (A + B + ABS(A - B)) / 2 (source: https://discuss.codechef.com/t/write-a-c-program-to-find-max-of-2-numbers/54/2)
 * 
 * 2 - using a preprocess: (source: https://stackoverflow.com/a/3437484/10224558)
 *      It will be something like the following:
 *          #define MAX(a,b) ((a) > (b) ? a : b)
 *      because there is no build in function to do it and I do not recommande using this due 
 *          to double-evaluation side effect
 * 
 *      That for the old way for the new and improved gcc "statement expression" way: 
 *      It will be (source : https://stackoverflow.com/a/58532788/10224558)
 *      #define max(a,b)             \
        ({                           \
            __typeof__ (a) _a = (a); \
            __typeof__ (b) _b = (b); \
            _a > _b ? _a : _b;       \
        })
    3- Using function : 
        int max(int num1, int num2) {
                    return (num1 > num2 ) ? num1 : num2;
        }
    4- Using if statement

    And because it bensasi (×﹏×) 
    we will use the first one 
 *      
*/
int main(int argc, char const *argv[])
{
    int fiora, camille;

    printf("Donnez deux nombres: \n");
    scanf("%d%d", &fiora, &camille);

    printf("Le plus grand numbre est: %d\n", (fiora > camille) ? fiora : camille); //(camille + fiora + abs(camille - fiora)) / 2);

    return 0;
}

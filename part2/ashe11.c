#include <stdio.h>

int main()
{

    /**
     * 1 inch (pound) =>    0.0254 metter
     * 1 foot (pied) => 0.3048 metter
    */
    int inch, foot = 0;

    printf("Gimme ur hight in inch and foot: ");
    scanf("%d%d", &inch, &foot);

    printf("%d inch to metter is : %f\n", inch, inch * 0.0254);
    printf("%d foot to metter is : %f\n", foot, foot * 0.3048);

    return 0;
}
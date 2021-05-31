#include <stdio.h>

int main(){
    int min, max, camille[10];

    for (int i = 0; i < 10; i++)
    {
        printf("put the %d/10 element: \n", i+1);
        scanf("%d", &camille[i]);
    }


    min = camille[0];
    max = camille[0];

    for(int i = 0; i < 10; i++){

        if(camille[i] > max){
            max = camille[i];
        }else if(camille[i] < min){
            min = camille[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
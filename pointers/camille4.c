#include <stdio.h>

int main(){

    float t[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    float sum = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            sum += *(*(t+i) + j); //t[i][j];
        }
    }

    printf("The sum is: %f\n", sum);

    return 0;
}
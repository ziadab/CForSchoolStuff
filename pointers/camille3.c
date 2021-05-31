#include <stdio.h>

int main(){
    float t1[10];
    float t2[10] = {1, -2, -3, -5, -3, -79, -12, -10, -11, 2};
    int counter = 0;

    for(int i = 0; i < 10; i++){
        if(t2[i] > 0){
            t1[counter] = t2[i];
            counter++;
        }
    }

    // gettinng the empty space
    int rest = 10 - counter;
    for(int i = 0; i < rest; i++){
        t1[counter + i] = 0;
    } 

    // printf("Counter: %d\n", counter);
    for(int i = 0; i < 10; i++){
        printf("%f\n", t1[i]);
    }
}
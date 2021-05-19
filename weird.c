#include <stdio.h>

int main(void) {
  typedef struct{
    float reel;
    float imagin;
  } complex;

  complex c1, c2;

  printf("Part reel of c1: ");
  scanf("%f", &c1.reel);

  printf("Part imagin of c1: ");
  scanf("%f", &c1.imagin);

  printf("Part reel of c2: ");
  scanf("%f", &c2.reel);

  printf("Part imagin of c2: ");
  scanf("%f", &c2.imagin);

  printf("\nResult is : %0.2f + %0.2fi\n", c1.reel + c2.reel, c1.imagin + c2.imagin);

}
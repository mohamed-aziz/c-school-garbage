

#include <stdio.h>

float surface(float r) {
  return 3.14 * r*r;
}

float perimetre(float) {
  return 2* 3.14 * r;
}

int main(int argc, char *argv[]) {
  float r;
  scanf("%f", &r);
  printf("%f\n", surface(r), perimetre(r));
  return 0;
}

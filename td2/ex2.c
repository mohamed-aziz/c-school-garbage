
#include <stdio.h>
#include <math.h>

int cubique (int n) {
  if (n == 0) return 0;
  return pow(n % 10, 3) + cubique(n / 10);
}

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  printf("%s\n", (cubique(n) == n) ? "Vraie" : "Faux");
  return 0;
}

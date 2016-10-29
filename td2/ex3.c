

#include <stdio.h>

int est_premier(int n) {
  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  printf("%s\n", est_premier(n) ? "Vraie" : "Faux");
  return 0;
}

#include <stdio.h>

char verite (int x) {
  if (x<0) return 'N';
  if (x>0) return 'P';
  return 'Z';
}

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  printf("%c\n", verite(n));
  return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]) {
  char s[100];
  int x;
  scanf("%d", &x);
  int i;
  for (i = 0; i < x; i++) {
    scanf("%s", &s[i]);
  }
  for (i = 0; i < x; i++) {
    printf("%d\n", s[x-i-1]);
  }
  return 0;
}

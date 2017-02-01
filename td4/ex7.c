

#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int t[50] ;
  int i;
  for (i = 0; i < n; i++) {
    printf("t[%d] = ?\n", i);
    scanf("%d", &t[i]);
  }
  for (i = 0; i < n; i++) {
    printf("t[%d] = %d\n", i, t[i]);
  }
  int f;
  for (i = 0; i < (n / 2); i++) {
    f = t[i];
    t[i] = t[n-i-1];
    t[n-i-1] = f;
  }
    for (i = 0; i < n; i++) {
    printf("t[%d] = %d\n", i, t[i]);
  }

  
  return 0;
}

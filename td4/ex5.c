

#include <stdio.h>
#define n 4
int main(int argc, char *argv[]) {
  int t[n];
  int t1[n];
  int i;
  for (i = 0; i < n; i++) {
    printf("t[%d] = ?\n", i);
    scanf("%d", &t[i]);
  }
  for (i = 0; i < n; i++) {
    printf("t1[%d] = ?\n", i);
    scanf("%d", &t1[i]);
  }
  
  for (i = 0; i < n; i++) {
    if (t[i] == t1[i]) {
      printf("T1[%d] = T[%d] = %d\n", i, i, t[i]);
    }
  }

  return 0;
}

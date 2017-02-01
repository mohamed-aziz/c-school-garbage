

#include <stdio.h>

int main(int argc, char *argv[]) {

  int T[50];
  int n;
  scanf("%d", &n);
  int i; 
  for (i = 0; i < n; i++) {
    printf("T[%d] = ?\n", i);
    scanf("%d", &T[i]);
  }
  for (i = 0; i < n; i++) {
    printf("T[%d] = %d\n", i, T[i]);
  }
  
}

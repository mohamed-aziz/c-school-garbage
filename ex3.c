
#include <stdio.h>

int main(int argc, char *argv[]) {
  int t[50][50];

  int n,m;
  scanf("%d %d", &n, &m);
  int dx = 1;
  int i, j;
  int df = 0;
  int dd = m - 1 ;
  int inc = 0;
  for (i = 0; i < n; i++) {
    if ((i+1) % 2 != 0) {
      for (j = 0; j < m; j++) {
	t[i][j] = inc ++;
      }

    } else {
      for (j = m - 1; j >= 0; j--) {
	t[i][j] = inc ++;
      }

    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", t[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

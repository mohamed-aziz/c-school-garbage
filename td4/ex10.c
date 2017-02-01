

#include <stdio.h>

int main(int argc, char *argv[]) {
  int s[50][50];
  int n, m;
  scanf("%d %d", &n, &m);
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("s[%d][%d] = ?\n", i, j);
      scanf("%d", &s[i][j]);
    }
  }
  int sommeLigne, sommeCol ;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", s[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < n; i++) {
    sommeLigne = 0;
    sommeCol = 0;
    for (j = 0; j < m; j++) {
      if (i<n && j<m) {
	sommeLigne += s[i][j];
      }
      if (j<n && i<m) {
	sommeCol += s[j][i];
      }
    }
    printf("Somme L%d %d\n", i, sommeLigne);
    printf("Somme C%d %d\n", i, sommeCol);
  }

  return 0;
}

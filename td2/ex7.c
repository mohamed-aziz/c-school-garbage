

#include <stdio.h>

void remplir(int tableau[], int n) {
  int i;
  int j;
  for (i = 0; i < n; i++) {
    printf("%d\n", i);
    scanf("%d", &j);
    tableau[i] = j;
  }
}

void afficher(int tableau[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", tableau[i]);
  }
  printf("\n");
  
}

void inserer(int tableau[], int n, int x) {
  int i, j;
  for (i = 0; i < n; i++) if ((i<n-1) && ((x>tableau[i]) && x<tableau[i+1])) break;
  for (j = n; j > i; j--) {
    tableau[j] = tableau[j-1];
  }
  tableau[i+1] = x;
}

int main(int argc, char *argv[]) {
  int n;
  int x;
    
  scanf("%d", &n);
  int tableau[n];

  remplir(
	  tableau,
	  n
	  );
  scanf("%d", &x);

  afficher(tableau, n);

  inserer(tableau, n, x);
  n ++;
  afficher(tableau, n);
  
  return 0;
}

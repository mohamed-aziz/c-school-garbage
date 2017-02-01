

#include <stdio.h>

int dicho (int t[100], int v, int m) {
  int pivotDroit = m-1, pivotGauche = 0, milieu = (m-1)/2;
  while (pivotDroit>pivotGauche) {
    if (t[milieu] > v) {
      pivotGauche = milieu;
      milieu = (pivotGauche + pivotDroit) /2;
    }
    else if (t[milieu] < v) {
      pivotDroit = milieu;
      milieu = (pivotGauche + pivotDroit) /2;
    }
    else {
      return milieu;
    }
  }
  
  printf("Non trouvee\n");
  return -1;
}

int main(int argc, char *argv[]) {
  int n, x;
  printf("Taille du tableau\n");
  scanf("%d", &n);
  int t[100];
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    t[i] = x;
  }
  int v;
  printf("Valeur a chercher\n");
  scanf("%d", &v);

  printf("%d\n", dicho(t, v, n));
  return 0;
}

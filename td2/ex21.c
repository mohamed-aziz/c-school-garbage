

#include <stdio.h>


void remplir(int tableau[], int n) {
  int i;
  int j;
  for (i = 0; i < n; i++) {
    scanf("%d", &j);
    tableau[i] = j;
  }
}


void long_plateau(int tableau[], int n) {
  int index_plat, long_plat = 1;
  index_plat = 0;
  int max_index_plat, max_long_plat = 1;
  max_index_plat = 0;
  int i;

  for (i = 1; i < n; i++) {
    if (tableau[i] == tableau[i-1]) {
      long_plat ++ ;
    } else {
      if (long_plat > max_long_plat) {
	max_long_plat = long_plat;
	max_index_plat = index_plat;
      }
      long_plat = 1;
      index_plat = i;
    }
  }

  printf("%d %d\n", max_index_plat+1, max_long_plat);
}

int main(int argc, char *argv[]) {
  int n;

  scanf("%d", &n);
  int tableau[n];

  remplir(
	  tableau,
	  n
	  );

  long_plateau(
	       tableau, n
	       );
  
  return 0;
}

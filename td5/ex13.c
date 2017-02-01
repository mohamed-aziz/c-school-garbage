

#include <stdio.h>

int Facture(int kwatt) {
  int s = 0;
  if (kwatt > 250) {
    s += (kwatt - 250 ) * 70 + 100 * 50 + 150 * 65;
  }
  else if (kwatt < 100) {
    s += kwatt * 50;
  }
  else if (kwatt > 100) {
    s += (kwatt - 100) * 65;
  }

  return s;
  
}

int main(int argc, char *argv[]) {
  int x;
  scanf("%d", &x);
  
  printf("%d\n", Facture(x));
  return 0;
}

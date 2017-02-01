#include <stdio.h>

void remplir (int t[100], int n) {
  int i;
  printf("t[%d]\n", 0);
  scanf("%d", &t[0]);
  for (i = 1; i < n; i++) {
    do {
      printf("t[%d]\n", i);
      scanf("%d", &t[i]);
    } while (t[i]<t[i-1]);
  }
}

int dic(int t[100], int n , int x) {
  int m, l, r;
  l = 0;
  r = n - 1;
  m = (l + r) / 2;
  while ((t[m] != x) && (l<r)) {
    if (t[m] < x) {
      l = m+1;
    }
    else {
      r = m - 1;
    }
    m = (l + r) / 2;
  }
  if (t[m] == x) return m;
  else return -1;
}

int main(int argc, char *argv[]) {
  int t[100];
  int n;
  scanf("%d", &n);
  remplir(t, n);
  int x;
  scanf("%d", &x);  
  printf("%d\n", dic(t, n, x));
  return 0;
}

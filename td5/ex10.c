

#include <stdio.h>
#include <math.h>

void decabin(int x, int t[100]) {
  int i = 0;
  while (x>0) {
    t[i] = x % 2;
    i++;
    x /= 2;
  }
}

int binadec(int t[100], int c) {
  int i;
  int s = 0;
  for (i = 0; i<=c; i++) {
    s += ((int) pow(2, i)) * t[i];
  }
  return s;
}

int main(int argc, char *argv[]) {

  int t[100];
  int i;
  for (i = 0; i < 100; i++) {
    t[i] = -1;
  }
  int x;
  scanf("%d", &x);
  decabin(x, t) ;
  for (i = 0; t[i] != -1; i++);
  int j;
  for (j = i-1; j >= 0; j--) {
    printf("%d", t[j]);
  }
  printf("\n");
  printf("%d\n", binadec(t, i-1));

  printf("Entrer deux nombres binaires\n");
  int n, m;
  scanf("%d", &n);
  int v[100];

  for (i = 0; i < 100; i++) {
    t[i] = -1;
  }
  
  for (i = 0; i < n; i++) {
    scanf("%d", &t[n-i-1]);
  }
  
  scanf("%d", &m);
  
  for (i = 0; i < 100; i++) {
    v[i] = -1;
  }
  
  for (i = 0; i < m; i++) {
    scanf("%d", &v[m-i-1]);
  }

  int c [100];
  for (i = 0; i < 100; i++) {
    c[i] = -1;
  }
  
  decabin (binadec(t, n-1) + binadec(v, m-1), c);
  
  for (i = 0; c[i] != -1; i++);
  printf("%d\n", i);
  for (j = i-1; j >= 0; j--) {
    printf("%d", c[j]);
  }
  printf("\n");

  return 0;
}



#include <stdio.h>

void f(int x, int t[50], int* n) {
	*n = 0;
	int i = 2;

	do {
		if (x % i == 0) {
			t[*n] = i;
			(*n) ++ ;
			x /= i;
		} else {
			i ++ ;
		}
	} while (x>1);
}

void affich(int t[50], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", t[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	int t[100];
	int n;
	int x;
	scanf("%d", &x);
	f(x, t, &n);
	affich(t, n);
  
	return 0;
}

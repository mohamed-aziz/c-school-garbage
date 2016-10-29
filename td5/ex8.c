

#include <stdio.h>

int sch(int t[100], int v[100], int n, int m) {
	int i, j;
	int somme = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			somme += t[i] * v[j];
		}
	}
	return somme;
}

int main(int argc, char *argv[]) {
	int n, m, x;
	scanf("%d", &n);
	int t[100], v[100];
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		t[i] = x;
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &x);
		v[i] = x;
	}

	printf("%d\n", sch(t, v, n, m));
	return 0;
}

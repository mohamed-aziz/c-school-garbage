#include <stdio.h>
#include <stdlib.h>

void lire(int *p, int *n, int *m) {
	// lire une matrice;
	printf("Nombre de lignes?\n");
	scanf("%d", n);
	printf("Nombre de colonnes?\n");
	scanf("%d", m);
	int i, j;
	for (i = 0; i < *n; i++) {
		for (j = 0; j < *m; j++) {
			printf("t[%d, %d]\n", i, j);
			scanf("%d", (p+i**n+j));
		}
	}
}

void mulmat(int *a, int *b, int *c, int n, int m, int o, int p) {
	int i, j, k;
	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			*(c+i*n+j) = 0;
			for (k = 0; k < m; k++) {
				*(c+i*n+j) += *(a+i*n+k) * *(b+k*i+j);
			}
		}
	}
}

void affichage(int *c, int a, int b) {
	int i, j;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d  ", *(c+i*a+j));
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	int *c, *a, *b;
	int n, m, o, p;
	a = malloc(sizeof(int) * 100);
	b = malloc(sizeof(int) * 100);
	c = malloc(sizeof(int) * 100);
	lire(a, &n, &m);
	lire(b, &o, &p);
	mulmat(a, b, c, n, m, o, p);
	affichage(c, n, p);

	free(a);
	free(b);
	free(c);
	return 0;
}

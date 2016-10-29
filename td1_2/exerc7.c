#include <stdio.h>
#include <stdlib.h>

void lire(int *a, int *n) {
	printf("Nombre de colonnes\n");
	scanf("%d", n);
	int i;
	for (i = 0; i < *n; i++) {
		scanf("%d", a+i);
	}
}

void somme(int *a, int *b , int n , int k) {
	int i;
	int s;
	int j;
	for (i = 0; i < n - k + 1; i++) {
		s = 0;
		for (j = 0; j < k ; j++) {
			s += *(a + j + i);
		}
		*(b+i) = s;
	}
}

void affichage(int *a, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d  \n", *(a+i));
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	int *a, n;
	int *b, k;
	a = malloc(sizeof(int) * 100);
	b = malloc(sizeof(int) * 100);

	lire(a, &n);
	printf("Entrer k\n");
	scanf("%d", &k);

	somme(a, b, n, k);
	affichage(b, n-k+1);
	return 0;
}

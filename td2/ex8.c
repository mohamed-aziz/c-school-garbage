#include <stdio.h>

void minimax(float tableau[], int n) {
	int mini = 0;
	int maxi = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (tableau[i]>tableau[maxi]) {
			maxi = i;
		}
		if (tableau[i]<tableau[mini]) {
			mini = i;
		}
	}
	printf("%d %f %d %f\n", maxi, tableau[maxi], mini, tableau[mini]);
}


void remplir(float tableau[], int n) {
	int i;
	float j;
	for (i = 0; i < n; i++) {
		printf("%d\n", i);
		scanf("%f", &j);
		tableau[i] = j;
	}
}


int main(int argc, char *argv[]) {

	int n;
	int x;
    
	scanf("%d", &n);
	float tableau[n];

	remplir(
		tableau,
		n
		);

	minimax(
		tableau, n
		);
	return 0;
}

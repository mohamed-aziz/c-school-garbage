#include <stdio.h>

#define N 5

int main() {
	int t[N];
	t[0] = 12;
	t[1] = -22;
	t[2] = -2;
	t[3] = 223;
	t[4] = -1;

	// changer le signe;
	int i;
	for (i = 0; i < N; i++) {
		t[i] *= -1;
	}

	for (i = 0; i < N; i++) {
		printf("%d\n", t[i]);
	}
  
	// calcul de la moyenne
	float moyenne = 0;
	for (i = 0; i < N; i++) {
		moyenne += (float) t[i] / N;
	}
	printf("La moyenne est %f\n", moyenne);

	// recherche d'un element
	int elem = -223;
	for (i = 0; i < N; i++) {
		if (t[i] == elem) {
			break;
		}
	}
	printf("L'element %d est a l'indexe %d\n", elem, i);

	// cherche le plus grand element
	int plusGrand=t[0];
	for (i = 1; i < N; i++) {
		if (plusGrand<t[i]) {
			plusGrand = t[i];
		}
	}
	printf("Le plus grand element est %d\n", plusGrand);

	// chercher l'index du plus grand element
	plusGrand=t[0];
	int index = 0;
	for (i = 1; i < N; i++) {
		if (plusGrand<t[i]) {
			plusGrand = t[i];
			index = i;
		}
	}
	printf("Le plus grand element est %d son index est %d\n", plusGrand, index);

	return 0;
}

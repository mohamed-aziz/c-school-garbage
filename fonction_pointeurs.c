#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
	return (a > b ) ? a : b;
}


int min(int a, int b) {
	return (a < b ) ? a : b;
}


int compare(int a, int b, int (*cmpfunc)() ) {
	return (*cmpfunc)(a, b) == a;
}

void tri(int t[], int taille, int (*cmpfunc)()) {
	int i, j;
	int tmp;
	for (i = 0 ; i < taille; i ++) {
		for (j = 0 ; j < taille - 1; j ++) {
			if (compare(t[j], t[j+1], cmpfunc)) {
				tmp = t[j+1];
				t[j+1] = t[j];
				t[j] = tmp;
			}	
		}
	}
}

void main() {
	printf("%d\n",	compare(12, 8, &max));
	printf("%d\n",	compare(12, 8, &min));
	int t[] = {12, -12, 23, 23, 1, 1, 233, 1111, 12332};
	tri(t, sizeof(t) / sizeof(int), &max);
}

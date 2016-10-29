#include <stdio.h>

void remplir(int t[100], int n) {
	int i;
	printf("t[%d]\n", 0);
	scanf("%d", &t[0]);
	for (i = 1; i < n; i++) {

		do {
			printf("t[%d]\n", i);	
		} while (t[i] < t[i - 1]);
	}
}

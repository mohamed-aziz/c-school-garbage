
#include <stdio.h>

float puissance(int n, float x) {
	int i;
	float p = 1;
	for (i = 0; i < n; i++) {
		p *= x;
	}

	return p;
}


int main(int argc, char *argv[]) {
	float x;
	int n;
	scanf("%f %d", &x, &n);
	printf("%f\n", puissance(n, x));
	return 0;
}

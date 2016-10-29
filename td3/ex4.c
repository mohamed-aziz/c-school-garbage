

#include <stdio.h>

int main(int argc, char *argv[]) {
	float x;
	int n;
	scanf("%f %d", &x, &n);

	int i;
	float puissance = 1;
	for (i = 0; i < n; i++) {
		puissance *= x;
	}
	printf("%f\n", puissance);
	return 0;
}


#include <stdio.h>

int pgcd(int a, int b) {
	if (a*b == 0) return a+b;
	return pgcd(b, a % b);
}

int ppcm(int a, int b) {
	return a*b / pgcd(a, b);
}

int main(int argc, char *argv[]) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", pgcd(a, b), ppcm(a, b));
	return 0;
}

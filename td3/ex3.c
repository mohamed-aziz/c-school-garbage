
#include <stdio.h>

int primalite(int x) {
	int i;
	for (i = 2; i < x; i++) {
		if (x % i == 0) return 0;
	}

	return 1;
}

int main(int argc, char *argv[]) {
	int x;
	scanf("%d", &x);

	printf("%d est %spremier\n", x, primalite(x) ? "" : "non ");
	return 0;
}

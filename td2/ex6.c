

#include <stdio.h>

int somme(int n) {
	int i, j, s;
	j = 1;
	s = 0;
	for (i = 1; i <= n; i++) {
		j *= i;
		s += j;
	}
	return s;
}

int main(int argc, char *argv[]) {
	int h;
	scanf("%d", &h);
	printf("%d\n", somme(h));
	return 0;
}

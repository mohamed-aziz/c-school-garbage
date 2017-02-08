

#include <stdio.h>

int main(int argc, char *argv[]) {
	int f;
	scanf("%d", &f);
	int factorielle = 1;
	int i;
	for (i = 2; i <= f; i++) {
		factorielle *= i;
	}
	printf("%d\n", factorielle);
	return 0;
}

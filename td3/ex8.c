

#include <stdio.h>

int main(int argc, char *argv[]) {
	int a;
	scanf("%d", &a);
	while (a != 1) {
		printf("%d\n", a);
		if (a % 2 == 0) a /= 2;
		else a = 3 * a  + 1;
	}
	return 0;
}



#include <stdio.h>

int main(int argc, char *argv[]) {
	int x;
	do {
		scanf("%d", &x);
	} while (x < 0 || x % 3 != 0);
	return 0;
}

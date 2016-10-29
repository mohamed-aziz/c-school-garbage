#include <stdio.h>

void echange2(int *x, int *y) {
	int *z;
	*z = *x;
	*x = *y;
	*y = *z;
}

int main(int argc, char *argv[]) {
	int a = 2, b = 3;
	echange2(&a, &b);
}

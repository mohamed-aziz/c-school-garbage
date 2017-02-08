

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d %d %d\n", i, (int) pow( i, 2),(int) pow(i,3));
	}
	return 0;
}

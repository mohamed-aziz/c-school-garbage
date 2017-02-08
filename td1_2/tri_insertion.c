#include <stdio.h>
#include <stdlib.h>
#define f 4

void inserer(int *p, int j) {
	int c;
	c = *(p+j+1);
	while (j>=0 && (*p+j)>c) {
		*(p+j+1) = *(p+j);
		j --;
	}
	*(p+j+1) = c;
}

void tri_insertion(int *p, int n) {
	int i;
	int j;
	int c;
	for (i = 1; i < n; i++) {
		inserer(p, i-1);
	}

}


int main(int argc, char *argv[]) {
	int *p;
	p = malloc(sizeof(int) * 4);
	*p = 1;
	*(p+1) = -2;
	*(p+2) = -3;
	*(p+3) = 23;
	tri_insertion(p, f);
	return 0;
}

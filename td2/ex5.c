

#include <stdio.h>



int main(int argc, char *argv[]) {
	int h;
	scanf("%d", &h);
	int i, j;
	for (i = 0; i <= h; i++) {
		for (j = 1; j <= h-i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i*2+1; j++) {
			printf("*");
		}
		printf("\n");
	}
  
	return 0;
}

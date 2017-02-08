

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 1;
	while (i++ < 50) {
		printf("%d\n", i * 2);
	}
  
	i = 1;
	do {
		printf("%d\n", i * 2);
	} while (i++<50);

	for (i = 1; i <= 50; i++) {
		printf("%d\n", i * 2);
	}
  
	return 0;
}

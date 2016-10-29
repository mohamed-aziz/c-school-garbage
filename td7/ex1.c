

#include <stdio.h>
#include <math.h>


int long_int(int n) {
	return (int) floor( log(n) / log(10) ) + 1;
}

int est_symetrique(int n) {
	return (n / 100)  ==  (n % 10);
}

int main() {

	printf("Entrer n\n");

	int n;
	scanf("%d", &n);
	int i;
	int t[n];
  
	for (i = 0; i < n; i++) {
		do {
			printf("t[%d] <- \n", i);
			scanf("%d", &t[i]);
		} while (long_int(t[i]) != 3);
	}

  
	for (i = 0; i < n; i++) {
		if (est_symetrique(t[i])) {
			printf("%d\n", t[i]);
		}
	}
	return 0;
}

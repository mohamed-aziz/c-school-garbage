

#include <stdio.h>

int main(int argc, char *argv[]) {

	int n, m;
	scanf("%d %d", &n, &m);
	int t[50], t2[50];

	int i;
	for (i = 0; i < n; i++) {
		printf("t[%d] = ?\n", i);
		scanf("%d", &t[i]);
	}
	for (i = 0; i < m; i++) {
		printf("t2[%d] = ?\n", i);
		scanf("%d", &t2[i]);
	}

	// multiplication
	int schtroumpf = 0;
	int j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			schtroumpf += t[i] * t2[j];
		}
	}
	printf("%d\n", schtroumpf);
	return 0;
}



#include <stdio.h>

int obeit (int x) {
	int t[100];
	int i;
	for (i = 0; x != 0; i++) {
		t[i] = x % 10;
		x /= 10;
	}
	int j;
	for (j = 0; j <= i-2; j++) {
		if (t[j]  % t[j+1] != 0) {
			return 0;
		}
	}
	return 1;
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("%s\n", obeit(n) ? "OUI": "NON");
	return 0;
}

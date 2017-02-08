

#include <stdio.h>

int somme_diviseur(int n) {
	int somme = 0;
	int i;
	for (i = 1; i < n; i++) {
		if (n % i == 0) {
			somme += i;
		}
	}
	return somme;
}

int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%s\n", ((somme_diviseur(n) == m) && ( n == somme_diviseur(m))) ? "Amis" : "Non Amis");
 
	return 0;
}

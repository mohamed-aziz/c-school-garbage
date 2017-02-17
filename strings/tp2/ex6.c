#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverser(char *s) {
    int l = strlen(s);
    int c, i, j;

    for (i = 0, j = l - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}


int main(int argc, char *argv[]) {
	char * tableau[5];
	int i;
	for (i = 0; i < 5; i++) {
		tableau[i] = malloc(sizeof(char) * 100);
		fgets(tableau[i], 50, stdin);
		inverser(tableau[i]);
		tableau[i]++;
	}

	for (i = 0; i < 5; i++) {
		printf("%s\n", tableau[i]);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int *ABC;

	ABC = malloc(sizeof(int) * 26);
	int *PABC;
	for (PABC = ABC; PABC - ABC < 26; PABC++) {
		*PABC = 0;
	}
	PABC = ABC;
	char *ch1;
	ch1 = malloc(sizeof(char) * 100);
	fgets(ch1, 100, stdin);

	char *PCH = ch1;

	while (*PCH) {
		if (*PCH>=65 && *PCH<=90) {
			(*(PABC+ *PCH - 65) )++ ;
		} else if (*PCH>=97 && *PCH<=123) {
			(*(PABC+ (*PCH) - 97)) ++ ;
		}
		PCH ++ ;
	}
	strtok(ch1, "\n");
	printf("La chaine '%s' contient\n", ch1);
	for (PABC = ABC; PABC - ABC < 26; PABC++) {
		if (*PABC) {
			printf("%d fois la lettre %c\n", *PABC, PABC - ABC + 65);
		}
	}

	return 0;
}

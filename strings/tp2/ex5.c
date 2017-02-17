#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int longeur(char *  txt) {
	char * p = txt;
	while (*p++);
	return p - txt - 2;
}

int main(int argc, char *argv[]) {
	char *txt;
	txt = malloc(sizeof(char) * 100);
	fgets(txt, 100, stdin);
	char *p1 = txt, *p2 = txt+longeur(txt)-1;

	while (*p1 == *p2 && p1 < p2) {
		*p1++;
		*p2--;
	}

	if (p1>=p2) {
		printf("%s est un palidrome\n", txt);
	} else {
		printf("%s est n'est pas palidrome\n", txt);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *ch1;
	char *ch2;
	ch1 = malloc(sizeof(char)* 100);
	ch2 = malloc(sizeof(char) * 100);

	fgets(ch1, 100, stdin);
	*(ch1+strlen(ch1)-1) = '\0';
	
	fgets(ch2, 100, stdin);
	*(ch2+strlen(ch2)-1) = '\0';
	int resultat = strcmp(ch1, ch2);
	
	if (resultat>0) printf("%s est plus grande %s\n", ch1, ch2);
	else if (resultat<0) printf("%s est plus grande %s\n", ch2, ch1);
	else printf("%s sont egaux %s\n", ch1, ch2);
	
	return 0;
}

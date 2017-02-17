#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char *ch1;
	char *ch2;
	
	ch1 = malloc(sizeof(char) * 100);
	fgets(ch1, 100, stdin);
	// on ne veut pas le retour a la ligne
	strtok(ch1, "\n");
	ch2 = malloc(sizeof(char) * 100);
	fgets(ch2, 100, stdin);
	strtok(ch2, "\n");

	char *p1 = ch1, *p2, *p3;

	while (*p1) {
		p3 = p1;
		p2 = ch2;
		while (*p3 == *p2) {
			p3++;
			p2++;
		}
		if (!(*p2)) {
			strcpy(p1, p3);
			break;
		}		
		p1++;
	}

	printf("%s\n", ch1);
	return 0; 
}

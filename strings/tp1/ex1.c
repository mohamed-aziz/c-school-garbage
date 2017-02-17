
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	char *nom;
	char *prenom;
	nom = malloc(sizeof(char)* 100);
	prenom = malloc(sizeof(char) * 100);

	fgets(nom, 100, stdin);
	*(nom+strlen(nom)-1) = '\0';
	
	fgets(prenom, 100, stdin);
	*(prenom+strlen(prenom)-1) = '\0';
	int somme = 0;
	int i;
	for (i = 0; i < strlen(nom); i++) {
		if (*(nom+i) != ' ') {
			somme ++;
		}
	}

	for (i = 0; i < strlen(prenom); i++) {
		if (*(prenom+i) != ' ') {
			somme ++;
		}
	}

	printf("la somme est %d\n", somme);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	char *ch1;
	char *ch2;
	char *ch3;

	ch1 = malloc(sizeof(char)* 100);
	ch2 = malloc(sizeof(char) * 100);
	ch3 = malloc(sizeof(char) * 100);
	
	fgets(ch1, 100, stdin);
	*(ch1+strlen(ch1)-1) = '\0';
	
	fgets(ch2, 100, stdin);
	*(ch2+strlen(ch2)-1) = '\0';
	// en utilisant les fonctions des chaines
	strncpy(ch3, ch1, strlen(ch1) / 2);
	*(ch3+strlen(ch1)/2) = '\0';
	strcpy(ch3+strlen(ch3), ch2+(strlen(ch2)/2));
	
	printf("%s\n", ch3);

	// en utilisant les fgets et fputs
	*ch3 = '\0';

	// conio.h n'existe pas sous GCC sous linux
	// fgets(ch3, strlen(ch1) / 2, (FILE) ch1);
	
	return 0;
}

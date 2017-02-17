#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *ch1;
	char *m1;
	char *m2;
	char *m3;
	char *m4;
	char *m5;
		
	ch1 = malloc(sizeof(char)* 100);
	m1 = malloc(sizeof(char)* 100);
	m2 = malloc(sizeof(char)* 100);
	m3 = malloc(sizeof(char)* 100);
	m4 = malloc(sizeof(char)* 100);
	m5 = malloc(sizeof(char)* 100);
	
	fgets(ch1, 100, stdin);
	char *p1;
	p1 = strchr(ch1, ' ');
	m1 = ch1;
	*(p1)  = '\0';
	m2 = p1+1;
	p1 = strchr(p1+1, ' ');
	*(p1)  = '\0';
	m3 = p1+1;
	p1 = strchr(p1+1, ' ');
	*(p1)  = '\0';
	m4 = p1+1;
	p1 = strchr(p1+1, ' ');
	*(p1)  = '\0';
	m5 = p1+1;
	// supprimer le saut de ligne
	*(m5 + strlen(m5) - 1) = '\0';

	printf("1: %s , 2: %s , 3: %s , 4 : %s , 5 : %s\n", m1, m2, m3, m4, m5);
	
	return 0;
}

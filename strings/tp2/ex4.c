#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char *txt;
	txt = malloc(sizeof(char) * 100);		
	fgets(txt, 100, stdin);
	char * p = txt;
	while (*p++);
	printf("%d\n", p - txt - 1);
	return 0;
}

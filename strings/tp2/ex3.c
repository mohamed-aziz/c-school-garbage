#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int occurences(char *txt) {
	int i;
	for (i = 0; txt[i]; (txt[i] == 'e') ? i++ : *txt++);	    
	return i;
}

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
	
	char *txt;
	txt = malloc(sizeof(char) * 100);		
	fgets(txt, 100, stdin);
	printf("la longeur de txt %d\n", strlen(txt));
	printf("le nombre de e dans txt %d\n", occurences(txt));
	printf("%s", txt);
	inverser(txt);
	txt++;
	printf("%s\n", txt);
	return 0;
}

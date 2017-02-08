#include <stdio.h>

int s (char t[50]) {
	int i = 0;
	while (t[i] != '\0') {
		i++;    
	}
	return i;
}
int main() {
	char t[50];
	scanf("%s", t);
	int i;
	for (i = 0; i < s(t); i++) {
		printf("%d\n", t[i]);
	}
	return 0;
}

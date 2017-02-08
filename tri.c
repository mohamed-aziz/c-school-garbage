#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int t[100]={1, 4, -1, 3};
	int i, j;
	int *p;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (t[i] > t[j]) {
				p = &t[j];
				(t+j) = (int *) &t[i];
				*t[i] = p;
			}
		} 
	}
  

	return 0;
}

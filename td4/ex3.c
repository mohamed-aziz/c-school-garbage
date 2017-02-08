#include <stdio.h>
#include <math.h>

#define n 10
int main(int argc, char *argv[]) {
	int t[n];
	int a;
	scanf("%d", &a);
	int i;
	for (i = 0; i <= n; i++) {
		t[i] = pow((float) a, i);
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", t[i]);
	}
  
	return 0;
}

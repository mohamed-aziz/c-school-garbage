

#include <stdio.h>



int main(int argc, char *argv[]) {

	int n;
	scanf("%d", &n);
	int i;
	float moyHeures = 0, moyEcoutent;
	int x;
	int h;
	for (i = 0; i < n; i++) {    
		do {
			printf("1 ou 0\n");
			scanf("%d", &x);
		} while (x<0 || x>1);
		if (x) {
			printf("Pour combien d'heurs\n");
			scanf("%d", &h);
			moyHeures = (moyHeures + h) / n;
		}

		moyEcoutent = (moyEcoutent + x ) / n;
    
	}

	printf("%f %f \n", moyEcoutent * 100, moyHeures);
  
	return 0;
}

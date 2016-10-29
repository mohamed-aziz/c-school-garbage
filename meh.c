#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	printf("Entrer a, b, c\n");
	scanf("%f %f %f", &a, &b, &c);
	float d = (b*b)-4*(a*c);
	printf("%f\n", a);
	if (d==0) printf("L'equation est a un seul resultat reel %.2f\n", (b/(-2*a)));
	else if (d>=0) printf("L'eqution est a deux resultat reel %.2f %.2f\n", (-b-sqrt(d))/(2*a), (-b+sqrt(d))/(2*a));
	else printf("L'equation est a deux resultat imaginaires %.2f+%.2fi %.2f-%.2fi\n",
		    (-b/(2*a)), (sqrt(fabs(d))/(2*a)), (-b/(2*a)), (sqrt(fabs(d))/(2*a)));
	return 0;
}

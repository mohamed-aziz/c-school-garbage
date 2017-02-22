// ex5, Knani Mohamed Aziz, le 20, février 2017
#include <stdio.h>
#include <stdlib.h>

struct terme {int coeff, exp;};
typedef struct terme terme;

void
lire_polynome (terme *poly, int * n)
{
        printf("Combien de termes?\n");
        scanf("%d", n);
        int i;
        for (i = 0; i < *n; i++) {
                printf("Coefficient\n");
                scanf("%d", &(poly[i].coeff));
                printf("Exponent\n");
                scanf("%d", &poly[i].exp);
        }

}

int
main(int argc, char *argv[])
{

        terme * polynome;
        int n;
        polynome = malloc(sizeof(terme) * 100);
        lire_polynome(polynome, &n);


        return 0;
}

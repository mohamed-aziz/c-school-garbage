// ex4, Knani Mohamed Aziz, le 20, février 2017
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct personne
{
        float poids, taille;
};

typedef struct personne personne;

void
lire_une_personne (personne * unePersonne)
{
        printf("Poids\n");
        scanf("%f", &(unePersonne->poids));
        printf("Taille\n");
        scanf("%f", &(unePersonne->taille));
}


void
lire_des_personnes (personne * unePersonne, int * n)
{
        int i;
        printf("Combien de personnes\n");
        scanf("%d", n);
        for (i = 0; i < *n; i++) {
                lire_une_personne(&unePersonne[i]);
        }
}

int
main(int argc, char *argv[])
{
        personne * Tpersonnes;
        int n;
        Tpersonnes = malloc(sizeof(personne) * 50 );

        lire_des_personnes(Tpersonnes, &n);
        // afficher les 5 premieres personnes;
        int i;
        assert (n>=5);
        for (i = 0; i < 5; i++) {
                printf("poids %d\n", Tpersonnes[i].poids);
        }
        int pPoids = 0, pTaille = 0 ;
        for (i = 0; i < n; i++) {
                if (Tpersonnes[i].poids >= 56.78) {
                        pPoids ++ ;
                } if (Tpersonnes[i].taille >= 1.8) {
                        pTaille ++;
                }
        }

        printf("pp: %d  pt: %d\n", pPoids, pTaille);
        return 0;
}

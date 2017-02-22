// ex6, Knani Mohamed Aziz, le 20, février 2017

#include <stdio.h>
#include <stdlib.h>

struct personne
{
        char * nom;
        int id;
};

typedef struct personne personne;

void
saisie_personne (personne * p)
{
        printf("Entrer le nom\n");
        p->nom = malloc(sizeof(char) * 20);
        scanf("%s", p->nom);
        printf("Entrer l'id\n");
        scanf("%d", &p->id);
}

void
afficher_personne (personne p)
{
        printf("Nom %s , id %d\n", p.nom, p.id);
}

int
main(int argc, char *argv[])
{

        personne p0, p1, p2, p3, p4;
        saisie_personne(&p0);
        saisie_personne(&p1);
        saisie_personne(&p2);
        saisie_personne(&p3);
        saisie_personne(&p4);

        afficher_personne(p0);
        afficher_personne(p1);
        afficher_personne(p2);
        afficher_personne(p3);
        afficher_personne(p4);

        return 0;
}

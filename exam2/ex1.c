#include <stdio.h>
#include <stdlib.h>


typedef struct fiche {
	int mat;
	char nom[25];
	float note_math;
	float note_phy;
	float moyenne;
	
} fiche;

typedef struct liste {
	fiche donnee;
	struct liste *next;
} liste;

void saisirFiche(struct fiche *uneFiche) {
	printf("Saisir le nom: ");
	scanf("%s", uneFiche->nom);
	printf("Saisir la matricule: ");
	scanf("%d", &(uneFiche->mat));
	printf("Saisir la note de math: ");
	scanf("%f", &(uneFiche->note_math));
	printf("Saisir la note de physique: ");
	scanf("%f", &(uneFiche->note_phy));
	//	printf("Saisir la moyenne: ");
	//      scanf("%d", &(uneFiche->moyenne));
}

void saisie(struct liste **tete) {
	*tete = malloc( sizeof(struct liste) );
	saisirFiche(&((*tete)->donnee));
	if ((*tete)->donnee.mat < 0) {
		return;
	}
	saisie(&(*tete)->next);
}

int nombre(struct liste *tete) {
	int i = 0;
	while (tete != NULL) {
		tete = tete->next;
		i ++ ;
	}
	return i;
}

struct liste* recherche(struct liste *tete, int matricule) {
	while ((tete != NULL) && (matricule != tete->donnee.mat)) {
		tete = tete->next;
	}
	return tete;
}

void supprimer(struct liste *tete, int matricule) {
	struct liste *manode = recherche(tete, matricule);
	struct liste **indirecte = &tete;
	while ((*indirecte) != manode) {
		indirecte = &(*indirecte)->next;
	}
	*indirecte = manode->next;
}

void calculMoyenne(struct liste **tete) {
	(*tete)->donnee.moyenne = ((float) ((*tete)->donnee.note_math * 3 + (*tete)->donnee.note_phy * 2)) / 5;
}

int moyenneClasse(struct liste *tete) {
	int moy = 0;
	while (tete != NULL) {
		moy += tete->donnee.moyenne;
		tete = tete->next;
	}
	return moy;
}

int affiche(struct liste *tete) {
	while (tete != NULL) {
		if (tete->donnee.moyenne > 10) {
			printf("%s\n", tete->donnee.nom);
		}
		tete = tete->next;
	}
}

int main(int argc, char *argv[]) {
	struct liste *tete;
	saisie(&tete);
	calculMoyenne(&tete);
	return 0;
}

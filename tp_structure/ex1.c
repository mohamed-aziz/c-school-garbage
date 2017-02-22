// ex1, Knani Mohamed Aziz, le 20, février 2017
#include <stdio.h>
#include <stdlib.h>


struct date
{
        int jours, mois, annee;
};

typedef struct date date;

void
saisie_date(date * uneDate)
{

        do
        {
                scanf("%d", &(uneDate->jours));
        } while ((uneDate->jours<1) || (uneDate->jours>31));
        do
        {
                scanf("%d", &(uneDate->mois));
        } while ((uneDate->mois<1) || (uneDate->mois>12));

        do
        {
                scanf("%d", &(uneDate->annee));
        } while ((uneDate->annee<1990));

}

void
affiche_date (date uneDate)
{
        printf("%d/%d/%d\n", uneDate.jours, uneDate.mois, uneDate.annee);
}

int
date_inferieure(date date1, date date2)
{
        if (date1.annee<date2.annee) return 1;
        else if (date1.annee > date2.annee) {
                if (date1.mois < date2.mois) {
                        return 1;
                } else {
                        if (date1.jours < date2.jours) {
                                return 1;
                        }
                        return 0;
                }
        }

        return 0;
}

int
bisextille( int annee)
{
        return ((annee % 4 == 0) && (annee % 100 != 0)) || (annee % 400 == 0);

}

int
jour_max ( date uneDate)
{
        switch (uneDate.mois) {
        case 1:;
        case 3:;
        case 5:;
        case 7:;
        case 8:;
        case 10:;
        case 12: {
                return 31;
        }
        case 4:;
        case 6:;
        case 9:;
        case 11: {
                return 30;
        }
        case 2: {
                if (bisextille(uneDate.annee)) {
                        return 29;
                }
                return 28;
        }
        }
}

date
date_demain (date  uneDate)
{

        uneDate.jours = ((uneDate.jours) % jour_max(uneDate)) + 1;
        if (uneDate.jours == 1) {
                uneDate.mois = (uneDate.mois % 12) + 1;
                if (uneDate.mois == 1) {
                        uneDate.annee ++;
                }
        }

        return uneDate;
}

int
main(int argc, char *argv[])
{
        date  uneDate;

        saisie_date(&uneDate);

        affiche_date(uneDate);

        printf("La date de demain est : \n");

        affiche_date(date_demain(uneDate));

        return 0;
}

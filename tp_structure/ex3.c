// ex3, Knani Mohamed Aziz, le 20, février 2017

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define SQR(x) ((x)*(x))

struct point { float x, y, z; };
typedef struct point point;

struct cercle {point centre; float rayon;};
typedef struct cercle cercle;

struct cone {cercle base; point sommet;};
typedef struct cone cone;

float
hauteur (cone uneCone)
{
        return sqrt(
                    SQR(uneCone.base.rayon + uneCone.base.centre.x - uneCone.sommet.x)+
                    SQR(uneCone.base.centre.y - uneCone.sommet.y ) +
                    SQR(uneCone.base.centre.z - uneCone.sommet.z) -
                    uneCone.base.rayon);
}

float
cone_volume ( cone uneCone)
{
        return PI / 3 * uneCone.base.rayon * uneCone.base.rayon *
                hauteur(uneCone);
}

void
lire_point(point * unPoint)
{
        scanf("%f", &(unPoint->x));
        scanf("%f", &(unPoint->y));
        scanf("%f", &(unPoint->z));
}

void
lire_cone (cone * uneCone)
{
        lire_point(&(uneCone->sommet));
        scanf("%f", &(uneCone->base.rayon));
        lire_point(&(uneCone->base.centre));
}

int
main(int argc, char *argv[])
{
        cone uneCone;
        lire_cone(&uneCone);
        cone_volume(uneCone);
        return 0;
}

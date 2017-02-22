// ex2, Knani Mohamed Aziz, le 20, février 2017
#include <stdio.h>

struct point { float x, y, z; };

typedef struct point point;

void
lire_point(point * unPoint)
{
        scanf("%f", &(unPoint->x));
        scanf("%f", &(unPoint->y));
        scanf("%f", &(unPoint->z));
}

void
afficher_coord(point a)
{
        printf("x:%f y:%f z:%f\n",
               a.x, a.y, a.z);
}

point
quatrieme_point (point a, point b, point c)
{
        point milieu, d ;
        milieu.x = (a.x + c.x) / 2 ;
        milieu.y = (a.y + c.y) / 2;
        milieu.z = (a.z + c.z) / 2;

        d.x = b.x - 2*milieu.x;
        d.y = b.y - 2*milieu.y;
        d.z = b.z - 2*milieu.z;

        return d;
}


int
main(int argc, char *argv[])
{

        point A, B, C, D;
        printf("Entrer A\n");
        lire_point(&A);

        printf("Entrer B\n");
        lire_point(&B);

        printf("Entrer C\n");
        lire_point(&C);

        afficher_coord(quatrieme_point(A, B, C));
        return 0;
}

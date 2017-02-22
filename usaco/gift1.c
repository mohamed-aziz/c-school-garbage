/* ID: medaziz1
   LANG: C
   TASK: gift1
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
        FILE *fin  = fopen ("gift1.in", "r");
        FILE *fout = fopen ("gift1.out", "w");

        int num;
        char names[100][100];
        int balance [100];

        fscanf(fin, "%d", &num);
        int i;

        /* read names */
        for (i = 0; i < num; i++)
        {
                fscanf(fin, "%s", names[i]);
                balance[i] = 0;
        }
        char person[100], otherperson[100];
        int j;
        int f;
        int give, numwhom;
        int autrecompteur;

        for (i = 0; i < num; i++)
        {
                fscanf(fin, "%s", person);
                j = 0;
                /* search index */
                while (strcmp(person, names[j])!=0)
                {
                        j ++;
                }

                fscanf(fin, "%d %d", &give, &numwhom);

                if (numwhom>0)
                {
                        balance[j] += -give + (give % numwhom);

                        for (f = 0; f < numwhom; f++)
                        {
                                fscanf(fin, "%s", otherperson);
                                autrecompteur = 0;
                                /* search index */
                                while (strcmp(otherperson, names[autrecompteur]) != 0)
                                {
                                        autrecompteur ++;
                                }
                                balance[autrecompteur] += give / numwhom;
                        }
                }
        }

        for (i = 0; i < num; i++)
        {
                fprintf(fout, "%s %d\n", names[i], balance[i]);
        }

        return 0;
}

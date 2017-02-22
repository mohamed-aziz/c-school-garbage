/* ID: medaziz1
   LANG: C
   TASK: beads
*/


#include <stdio.h>
#include <string.h>


int
mod(int a, int b)
{
        int r = a % b;
        return r < 0 ? r + b : r;
}

int
main(int argc, char *argv[])
{

        FILE *fin  = fopen ("beads.in", "r");
        FILE *fout = fopen ("beads.out", "w");
        int n;
        fscanf(fin, "%d", &n);
        char s[1000];
        fscanf(fin, "%s", s);
        int i;
        int max = 0;
        int counteru, counterv;
        int v , u;
        char coloru, colorv;


        char currcolor = s[0];
        int truth = 1;
        for (i = 1; i < n; i++)
        {
                if (s[i] != currcolor)
                {
                        truth = 0;
                        break;
                }
        }

        if (truth)
        {
                fprintf(fout, "%d\n", n);
                return 0;
        }


        for (i = 1; i < n; i++)
        {
                counterv = 0;
                counteru = 0;
                u = i;
                coloru = s[u];
                do
                {
                        u ++ ;
                        counteru++;
                } while ( (s[mod(u, n)] == 'w') || (s[mod(u, n)] == coloru));

                v = i - 1;
                colorv = s[mod(v, n )];
                do
                {
                        counterv++;
                        v --;
                        if (colorv == 'w') {
                                colorv = s[mod(v, n )];
                        }
                } while ( (s[mod(v, n)] == 'w' || s[mod(v, n)] == colorv));
                if (i == 24)
                {
                        //      fprintf(fout, "debug %d %d\n", counterv + counteru, counterv);
                }
                if ( counteru + counterv > max )
                {
                        max = counteru + counterv;
                        //      fprintf(fout, "%d %d \n", i, max);
                }
        }

        fprintf(fout, "%d\n", max);
        return 0;
}

/* ID: medaziz1
   LANG: C
   TASK: palsquare
*/


#include <stdio.h>
#include <string.h>

char letters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};



void
base_n (char r[1000], int* i, int f, int n)
{
        *i = 0;
        while (f)
        {
                r[ (*i) ++ ] = letters[f % n];
                f /= n;
        }

        int c;
        char m;
        for (c = 0; c <= (*i-1) / 2; c++)
        {
                m = r[c];
                r[c] = r[*i - 1 - c];
                r[*i - 1 - c] = m;
        }
}


int
is_palindromic(char r[1000], int i)
{

        int j;
        for (j = 0; j <= (i-1) / 2; j++)
        {
                if (r[j] != r[i - 1 - j])
                {
                        return 0;
                }
        }
        return 1;

}


int
main(int argc, char *argv[])
{

        FILE *fin  = fopen ("palsquare.in", "r");
        FILE *fout = fopen ("palsquare.out", "w");

        int n;
        fscanf(fin, "%d", &n);

        int i;

        char square[1000];
        char nonsquare[1000];

        int representation_width_square;
        int representation_width_non_square;
        int f;

        for (i = 1; i <= 300; i++)
        {
                base_n(square, &representation_width_square, i * i, n);
                if (is_palindromic(square, representation_width_square))
                {
                        base_n(nonsquare, &representation_width_non_square, i, n);
                        nonsquare[ representation_width_non_square] = '\0';
                        square[representation_width_square] = '\0';
                        fprintf(fout, "%s %s\n", nonsquare, square);
                }
        }

        return 0;
}

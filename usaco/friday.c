/* ID: medaziz1
   LANG: C
   TASK: friday
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
        FILE *fin  = fopen ("friday.in", "r");
        FILE *fout = fopen ("friday.out", "w");

        int n;

        fscanf(fin, "%d", &n);

        int start = 0;
        int i;
        int j;
        int days;

        int numdays[10];
        for (i = 0; i < 7; i++)
        {
                numdays[i] = 0;
        }


        // monday
        int lastday = 0;

        for (i = 1900; i < 1900+n; i++)
        {
                for (j = 1; j <= 12; j++)
                {

                        switch (j)
                        {
                        case 9:
                        case 11:
                        case 6:
                        case 4 :
                                {
                                        days = 30;
                                        break;
                                }

                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12:
                                {
                                        days = 31;
                                        break;
                                }
                        case 2:
                                {
                                        if (i % 100 == 0)
                                        {
                                                if (i % 400 == 0)
                                                {
                                                        days = 29;
                                                        break;
                                                } else
                                                {
                                                        days = 28;
                                                        break;
                                                }
                                        }
                                if (i % 4 == 0)
                                {
                                        days = 29;
                                        break;
                                }
                                else
                                {
                                        days = 28;
                                }
                                break;
                        }

                        default:
                                break;
                        }

                        numdays[ ( 13 + lastday ) % 7  ]  ++ ;
                        lastday = (lastday + days) % 7;

                }
        }


        fprintf(fout, "%d %d %d %d %d %d %d\n", numdays[6], numdays[0],
                numdays[1], numdays[2], numdays[3], numdays[4], numdays[5]);

        return 0;
}

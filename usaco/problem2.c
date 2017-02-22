/* ID: medaziz1
LANG: C
TASK: ride 
*/

#include <stdio.h>
#include <string.h>


int product(char s[10]) {
  int i;
  int p = 1;
  for (i = 0; i < strlen(s); i++) {
    p *= ((int) s[i]) - 64;
  }
  return p;
}

int main(int argc, char *argv[]) {
  FILE *fin  = fopen ("ride.in", "r");
  FILE *fout = fopen ("ride.out", "w");

  char comet[20], ufo[20];
  fscanf(fin, "%s %s", comet, ufo);
  fprintf(fout, "%s\n", (product(comet) % 47 == product(ufo) % 47) ? "GO" : "STAY");
  return 0;
}

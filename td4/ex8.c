


#include <stdio.h>

int main(int argc, char *argv[]) {

  int n;
  scanf("%d", &n);
  int t[50], tpos[50], tneg[50] ;
  int i;
  for (i = 0; i < n; i++) {
    printf("t[%d] = ?\n", i);
    scanf("%d", &t[i]);
  }
  int ipos = 0, ineg = 0;
  for (i = 0; i < n; i++) {
    if (t[i]>=0) {
      tpos[ipos] = t[i];
      ipos ++ ;
    } else {
      tneg[ineg] = t[i];
      ineg ++ ;
    }
  }
  
  for (i = 0; i < ipos; i++) {
    printf("tpos[%d] = %d\n", i, tpos[i]);
  }
  for (i = 0; i < ineg; i++) {
    printf("tneg[%d] = %d\n", i, tneg[i]);
  }

  return 0;
}

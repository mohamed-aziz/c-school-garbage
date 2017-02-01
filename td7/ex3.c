

#include <stdio.h>

int s (char t[50]) {
  int i = 0;
  while (t[i] != '\0') {
    i++;    
  }
  return i;
}

int main() {
  char t[50] = "Quand le soleil a l horizon se levera...";
  int i  ;
  int code ;
  for (i = 0; i < s(t); i++) {
    if (((int) t[i] >= 65) && ((int) t[i] <= 65+25)  ) {
      t[i] = (((int) t[i] - 62)% 26) + 65;
    } else if (((int) t[i] >= 97) && ((int) t[i] <= 97+25)  ) {
      t[i] = (((int) t[i] - 94)% 26) + 97;
    }
  }

  printf("%s\n", t);
  return 0;
}

#include <stdio.h>

int longeur(char s[300]) {
  int i = 0;
  while (s[i] != '\0') {
    i ++;
  }
  return i;
}

int espace(char s[300]) {
  int i;
  for (i = 0; i < longeur(s); i++) {
    if (s[i] == ' ') {
      return 1;
    }
  }
  return 0;
}

void lire(char s[300]) {
  gets(s);
  int i, j;
  while (espace(s)) {
    for (i = 0; i < longeur(s); i++) {
      if (s[i] == ' ') {
	for (j = i+1; j < longeur(s); j++) {
	  s[j-1] = s[j];
	}
	s[longeur(s) - 1] = '\0';
      }
    }

  }
}

int palindrome(char s[300], char f[300]) {
  int i;
  for (i = 0; i < longeur(s); i++) {
    if (s[i] != f[ longeur(f) - i - 1 ]) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) {
  char s[300];
  lire(s);
  char f[300];
  lire(f);
  printf("%s %s\n", s, f);
  if (palindrome(s, f)) {
    printf("OUI ils sont palindromes\n");
  } else {
    printf("NON ils ne sont palindromes\n");

  }
  return 0;
}

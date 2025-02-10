#include <stdio.h>

#define MAXLINE 100

int main() {
  double sum, atof(char[]);
  char line[MAXLINE];
  int _getline(char line[], int max);

  sum = 0;
  while (_getline(line, MAXLINE) > 0) {
    printf("\t%g\n", sum += atof(line));
  }
  return 0;
}

int _getline(char s[], int lim) {
  int c, i;
  i = 0;
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
    s[i++] = c;
  }
  if (c == '\n') {
    s[i++] = c;  
  }
  s[i] = '\0';
  return i;
}

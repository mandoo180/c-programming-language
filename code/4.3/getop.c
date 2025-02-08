#include <stdio.h>
#include <ctype.h>
#include "calc.h"

/* getop: get next operator or numberic operand */
int getop(char s[]) {
  int i, c;
  while((s[0] = c = getch()) == ' ' || c == '\t') {
    /* skip */
  }
  s[1] = '\0';
  if (!isdigit(c) && c != '.')
    return c;                   /* not a number */
  i = 0;
  if (isdigit(c))
    while (isdigit(s[++i] = c = getch())) {
      /* collect integer part */
    }
  if (c == '.')
    while (isdigit(s[++i] = c = getch())) {
      /* collect fraction part */
    }
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}

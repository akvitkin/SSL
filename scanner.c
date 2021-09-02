#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

void get_token(char c, int state) {
  if (!state) {
    if (c == EOF) {
      get_token(c, FDT);
    } else if (c == ',') {
      get_token(c, SEP);
    } else if (!isspace(c)) {
      get_token(c, CAD);
    }
    return;
  }

  if (state == CAD) {
    char current;
    printf("Cadena: ");
    putchar(c);
    while ((current = getchar()) != EOF && !isspace(current) && current != ',') {
      putchar(current);
    }

    if (current == ',') {
      printf("\n");
      get_token(current, SEP);
      return;
    }

    printf("\n");
  }

  if (state == SEP) {
    printf("Separador: ,\n");
  }

  if (state == FDT) {
    printf("Fin De Texto: \n");
  }
}

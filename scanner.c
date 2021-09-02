#include <stdio.h>
#include <ctype.h>
#include "scanner.h"


void validacion_state(char c, int state){
  if (!state) {
    if (c == EOF) {
      get_token(c, FDT);
    } else if (c == ',') {
      get_token(c, SEPARADOR);
    } else if (!isspace(c)) {
      get_token(c, CADENA);
    }
  }
}

void imprimir_cadena(char c, int state){
  if (state == CADENA) {
    char current;
    printf("Cadena: ");
    putchar(c);

    while ((current = getchar()) != EOF && !isspace(current) && current != ',') {
      putchar(current);
    }
    if (current == ',') {
      printf("\n");
      get_token(current, SEPARADOR);
      return;
    }
    printf("\n");
  }
}


void imprimir_separador_fdt(int state){
    if (state == SEPARADOR) {
    printf("Separador: ,\n");
  }

  if (state == FDT) {
    printf("Fin De Texto: \n");
  }
}


void get_token(char c, int state) {

  validacion_state(c, state);

  imprimir_cadena(c, state);

  imprimir_separador_fdt(state);

}




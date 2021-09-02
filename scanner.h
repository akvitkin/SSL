#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

enum token {
  out = 0,
  CADENA = 1,
  SEPARADOR = 2,
  FDT = 3
};

void get_token(char, int);
void validacion_state(char, int);
void imprimir_cadena(char, int);
void imprimir_separador_fdt(int );

#endif

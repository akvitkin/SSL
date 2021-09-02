#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

enum token {
  out = 0,
  CAD = 1,
  SEP = 2,
  FDT = 3
};

void get_token(char, int);

#endif

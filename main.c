#include <stdio.h>
#include "scanner.h"

int main() {
  char c;
  while ((c = getchar()) != EOF) {
    get_token(c, out);
  }
  get_token(c, FDT);
}


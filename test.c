#include <stdio.h>

#include "includes/functions.h"
#include "includes/writeToCSV.h"
#include "includes/integral.h"

int main() {
  double a = -1.6, b = -1.0, c = 1.3, d = 1.9;
  const size_t acc = 10000;

  printf("Creating ./docs/table.csv ...\n");
  writeToCSV(y, acc, a, d);

  printf("integral(y) = %f\n", integral(y, acc, a, d));
  printf("integral(f1) +  integral(f2) +  integral(f3) = %f\n", 
    integral(f1, acc, a, b) + integral(f2, acc, b, c) + integral(f3, acc, c, d));

  return 0;
}

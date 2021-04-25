#include <stdio.h>
#include <stdlib.h>
#include "../includes/writeToCSV.h"

void writeToCSV(double (*pfun)(double), size_t pointsNum, double start, double end) {
  FILE *table;
  const double step = (end - start) / pointsNum;

  table = fopen("docs/table.csv", "w+");
  if (!table) {
    printf("Error: Cannot create ./table.csv\n");
    exit(1);
  }

  fprintf(table, "x;y;");
  for (double x = start; x <= end; x += step)
    fprintf(table, "\n%f;%f;", x, pfun(x));
  
  fclose(table);
}
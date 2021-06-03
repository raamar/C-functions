#include <stdio.h>
#include "integral.h"

double integral(double (*pfun)(double), size_t acc, double start, double end) {
  const double step = (end - start) / acc;
  double summ = 0.0;

  for (int i = 0; i < acc; i++)
    summ += pfun(start + step / 2 + i * step);
  
  return step * summ;
}
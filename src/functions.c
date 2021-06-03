#include <math.h>
#include "functions.h"

double y(double x) {
  double (*point)(double) = x < -1 ? f1 : x < 1.3 ? f2 : f3;
  return point(x);
}

double f1(double x) {
  return (x * x - 1);
}

double f2(double x) {
  return cos(x);
}

double f3(double x) {
  return log10(x);
}
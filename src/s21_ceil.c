#include "s21_math.h"

// возвращает ближайшее целое число, не меньшее заданного значения
long double s21_ceil(double x) {
  long double res = 0;
  long double total = 0;
  long int y = 0;

  y = x;
  total = x - y;
  if (total > 0)
    res = y + 1;
  else
    res = y;

  return res;
}

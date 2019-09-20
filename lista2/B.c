#include <stdio.h>


int encaixa(int a, int b) {
  int m, n;

  if (a > b) {
    m = a;
    n = b;
  }
  else {
    m = b;
    n = a;
  }
  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return 1;
  else
    return 0;

}

int segmento(int a, int b){
  int s, m, n;

  if (a > b) {
    m = a;
    n = b;
  }
  else {
    m = b;
    n = a;
  }

  s = 0;
  while (m >= n) {
    if (encaixa(m,n) == 1)
      s = 1;
    m = m/10;
  }
  if (s == 1)
    return 1;
  else
    return 0;
}

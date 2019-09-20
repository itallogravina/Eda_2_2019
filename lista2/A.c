#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia){
  float t,r;
  t = (tB-tA);
  r=(distancia/(t/3600));
  return r;
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
  float t,r;
  int p;
  t = (tB-tA);
  r=(distancia/(t/3600));
  if (r<=velocidadeMaxima) {
    return 0;
  }
  if (r>velocidadeMaxima) {
    return 1;
  }
}

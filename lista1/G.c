#include <stdio.h>
int main(int argc, char const *argv[]) {
  int M,N,P,outx,outy,out;
  int i=1;
  int A,B,xA=1,yA=1,xB,yB,memoria=0;
  scanf("%d %d",&N,&M);
  scanf("%d",&P);
  xB=N;
  yB=M;

for ( i ; i <= P; i++) {
  scanf("%d %d",&A,&B);
  if (A==1)yA++;
  if (A==2)yA--;
  if (A==3)xA++;
  if (A==4)xA--;

  if (B==1)yB++;
  if (B==2)yB--;
  if (B==3)xB++;
  if (B==4)xB--;

if (xA<1||xA>N||yA<1||yA>M){
  if(memoria==0){
    memoria=1;
    out = i;
    outx=xA;
    outy=yA;

  }
}
else if (xB<1||xB>N||yB<1||yB>M){
  if(memoria==0){
    memoria=2;
    out = i;
    outx=xB;
    outy=yB;
  }
}
else if (xB==xA&&yB==yA){
  if(memoria==0){
    memoria=3;
    out = i;
    outx=xA;
    outy=yA;
    }
  }
}
switch (memoria) {
  case 1: printf("PA saiu na posicao (%d,%d) no passo %d\n",outx,outy,out);break;
  case 2: printf("PB saiu na posicao (%d,%d) no passo %d\n",outx,outy,out);break;
  case 3: printf("Encontraram-se na posicao (%d,%d) no passo %d\n",outx,outy,out);break;
  default:
  printf("Nao se encontraram\n");
}
  return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int M,N,P;
  scanf("%d%d",&N,&M);
  int A[N],B[M];
scanf("%d",&P);
for (int i = 0; i < P; i++) {
  scanf("%d%d",&A[i],&B[i] );
}
for (int i = 0; i < P; i++) {
  printf("%d %d\n",A[i],B[i] );
}

  return 0;
}

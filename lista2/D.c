#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
int N,c=0;
scanf("%d",&N);
char A[N+1],B[N+1];
scanf("%s",A);
scanf("%s",B);

for (int i = 0; i < N; i++) {
  c+= A[i]==B[i];
}
  printf("%d\n",c );
  return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  scanf("%d",&a );
  if(a<100&&a>0){
  for (int i = 1; i <=a; i++) {
    for (int j = 0; j < i; j++) {
      printf("%02d ",i);
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 1; i <=a; i++) {
    for (int j = 0; j < i; j++) {
      printf("%02d ",j+1);
    }
    printf("\n");
  }}
  printf("\n");
  return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b=1;
  scanf("%d",&a );
  if(a<100&&a>0){
    for (int i = 0; i <a; i++) {
      for (int j = 0; j <= i; j++) {

    if (j<i) {
      printf("%02d ",b);
    }if (i==j) {
      printf("%02d",b);
    }
  }b++;
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i <a; i++) {
    for (int j = 0; j <= i; j++) {

      if (j<i) {
        printf("%02d ",j+1);

      }if (i==j) {
        printf("%02d",j+1);

      }

    }
    printf("\n");
  }}

  return 0;
}

#include <stdio.h>
#include <math.h>


int main() {
  int a=0,n=0;
  double b;
    while (scanf("%d",&n)) {
    a++;
    if(n==0)break;
    if(n==1)
    printf("Teste %d\n%d\n\n",a,n);
    else{

      b = pow(2,n);
      printf("Teste %d\n%.lf\n\n",a,b-1);
    }

    }

  return 0;
}

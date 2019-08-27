#include <stdio.h>

int main(int argc, char const *argv[]) {
  int d1,m1,a1,d2,m2,a2;
  int total,anos,b1,b2,y,m,d;
  scanf("%d%d%d",&d1,&m1,&a1);
  scanf("%d%d%d",&d2,&m2,&a2);
  if(d1>=1&&d2>=1&&d1<=31&&d2<=31&&m1>=1&&m2>=1&&m1<=12&&m2<=12&&a1>=1&&a1>=1&&a1<=9999&&a2<=9999){

    anos= a2-a1;

    b1=m1*31+d1;
    b2=m2*31+d2+(anos*372);

    total= b2-b1;
    y = total/ 372;

    m = total % 372 / 31;

    d = total % 372 % 31;
  printf("%d \n%d \n%d\n",y,m,d );
  }
else{
    printf("data invalida\n");
}

  return 0;
}

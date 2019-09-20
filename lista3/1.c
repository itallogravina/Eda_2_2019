#include <stdio.h>

void troca_int (int *x, int *y) {
int tmp;
tmp = *x;
*x = *y;
*y = tmp;
}
void troca_str (char *x, char *y) {
char *tmp;
printf("x %x\n",&x);
printf("y %x\n",&y);
tmp = x;
printf("tmp %x\n",&tmp);
x = y;
printf("x-y %x\n",&x);
y = tmp;
printf("y %x\n",&y);
}
int main() {
int a, b;
char *s1, *s2;
a = 3;
b = 4;
troca_int (&a, &b);
printf("a is %d\n", a);
printf("b is %d\n", b);
s1 = "1";
s2 = "2";
printf("antes1 %x\n",&s1);
printf("antes2 %x\n",&s2);

troca_str (&s1, &s2);
printf("s1 is %s\n", s1);
printf("s2 is %s\n", s2);
return 0;
}

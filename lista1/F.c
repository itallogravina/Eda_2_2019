#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
    for (int x = 1; x <= n; x++) {
        for(int y = 1 ; y <=n-x; y++) {
            printf(" ");
        }
        for (int y = 1; y <= x * 2 - 1; y++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

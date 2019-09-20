#include <stdio.h>
#include <string.h>
 char* concat(char *str1, char *str2) {
  return  strcat(str1, str2);
}
int main() {
char s1[1001], s2[1001];
scanf("%[^\n]s",s1);
scanf("%[^\n]s",s2);

printf("%s\n",concat(s1,s2) );

return 0;
}

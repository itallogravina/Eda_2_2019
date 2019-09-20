/*
 *
 * spoj PALAVRMG - Palavras Ordenadas
 */
#include <stdio.h>
#include <ctype.h>

int tamanho(char *s){
  int i=0;
  while (s[i]!='\0') {
    i++;
  }
  return i;
}

int main()
{
	int n;
	char s[43];
	scanf("%d",&n);

	while(n--)
	{
    int i=0,j=0,a=0,b=0;
	  scanf("%s",s);
  for (int i = 0; i < tamanho(s); i++) {

    if (toupper(s[i])>=toupper(s[i+1])) {
      a++;
    }
    else{b++;}
  }

  if (a>1) {
    printf("%s: N\n",s);
  } else {
    printf("%s: O\n",s);
  }
  }

	return 0;
}

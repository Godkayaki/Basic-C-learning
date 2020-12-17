/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

#define N 99

char cMajusculesAminuscules(char c){
    if (c>='A' && c<='Z')
        c=c-'A'+'a';
    return c;
}

void vMajusculesAminuscules(char *sz){
    while(*sz){
        *sz = cMajusculesAminuscules(*sz);
        sz++;
    }
}

int main(){
	char szCadena[N] = "aBcDeF 1234 xYz";

	printf("%s\n",szCadena);
	vMajusculesAminuscules(szCadena);
	printf("%s\n",szCadena);
	
	return 0;
}
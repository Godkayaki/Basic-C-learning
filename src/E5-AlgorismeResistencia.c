/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

int main(){
	double lfR1,lfR2,lfRe;
	printf("R1: ");
	scanf("%lf",&lfR1);
	printf("R2: ");
	scanf("%lf",&lfR2);
	lfRe = (lfR1 * lfR2 / (lfR1 + lfR2));
	printf("%.2lf",lfRe);
	
	return 0;
}

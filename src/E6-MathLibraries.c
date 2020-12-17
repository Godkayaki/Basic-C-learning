/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>
#include <math.h>

int main(){
	double lfTAE,lfi,lfn;
	
	printf("i: ");
	scanf("%lf",&lfi);
	printf("n: ");
	scanf("%lf",&lfn);
	lfTAE = pow (1 + lfi / lfn,lfn) - 1;
	printf("%.4lf",lfTAE);
	
	return 0;
}

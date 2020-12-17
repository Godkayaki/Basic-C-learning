/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

double lfPot(double lfBase,int nExponent){
	if(nExponent)
		return lfBase*lfPot(lfBase,nExponent-1);
	return 1.;
}

int main(){
	double lfB;
	int nE;
	
	printf("Base: ");
	scanf("%lf",&lfB);
	printf("Exponent: ");
	scanf("%d",&nE);
	printf("%.2lf^%d = %.4lf\n",lfB,nE,lfPot(lfB,nE));
	
	return 0;
}

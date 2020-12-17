/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

#define N_STR 33
#define N_GRUP 5

struct gV{
	int nEdat;
	char szNom[N_STR];
};

void vDemanaEstructura_gV(struct gV *g){
	printf("Nom: ");
	scanf("%s",g->szNom);
	printf("Edat: ");
	scanf("%d",&g->nEdat);
}

struct gV* gV_demanaEstructura_gV(struct gV *g){
	vDemanaEstructura_gV(g);
	return g;
}

void vVisualitzaEstructura_gV(struct gV *g){
	printf("g->szNom: %s\n",g->szNom);
	printf("g->nEdat: %d\n",g->nEdat);	
}

int main(){
	struct gV gV1,*pGv,gV2[N_GRUP];
	int nQuants,i;
	
	//vDemanaEstructura_gV(&gV1);
	pGv = gV_demanaEstructura_gV(&gV1);
	//pGv = &gV1;
	vVisualitzaEstructura_gV(pGv);
	
	
	do{
		printf("Quantes dades a entrar a gV2 <MAX: %d>?: ",N_GRUP);
		scanf("%d",&nQuants);
	}while(nQuants < 1 || nQuants > N_GRUP);
	
	for(i = 0 ; i < nQuants ; i++){
		vDemanaEstructura_gV(&gV2[i]);
	}
	printf("\n\n1) Visualització:\n");
	for(i = 0 ; i < nQuants ; i++){
		vVisualitzaEstructura_gV(&gV2[i]);
	}
	
	printf("\n\n2) Visualització:\n");
	for(i = 0 ; i < nQuants ; i++){
		pGv = &gV2[i];
		vVisualitzaEstructura_gV(pGv);
	}
	
	printf("\n\n3) Visualització:\n");
	pGv = gV2; //pGv = &gV2[0];
	for(i = 0 ; i < nQuants ; i++,pGv++){
		vVisualitzaEstructura_gV(pGv);
	}
	
	return 0;
}


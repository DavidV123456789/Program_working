//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int pole[4];
	int pole2[4];
	int i;
	
	srand(time(0));
	
	printf("Vygenerovane cislo:\n ");
	for(i=0;i<4;i++)
	{
		pole[i]= rand() % 10;
		printf("%d ", pole[i]);
	}
	
	printf("\nDruhe cislo:\n ");
	for(i=0;i<4;i++)
	{
		pole2[i]= 10-pole[i];
		printf("%d ", pole2[i]);
	}
	
	FILE *fw;
	if((fw=fopen("cisla.txt","w"))==NULL)
	{
		printf("\nNepodarilo sa otvorit subor...");
		return 1;
	}
	else{
		fprintf(fw,"Vygenerovane cislo:\n ");
		for(i=0;i<4;i++)
		{
			fprintf(fw,"%d ",pole[i]);
		}
		fprintf(fw,"\nDruhe cislo:\n ");
		for(i=0;i<4;i++)
		{
			fprintf(fw,"%d ",pole2[i]);
		}
	}
	
	fclose(fw);
	return 0;
}

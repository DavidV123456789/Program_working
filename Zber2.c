#include<stdio.h>

int main(){
	FILE *fr;
	int i, sucet, pocet , zber;
	float priemer;
	
	if((fr=fopen("Zber2.txt","r"))==NULL)
	{
		printf("Nepodarilo sa otvorit subor");
		return 1;
	}
	sucet =0;
	i=0;
	while(fscanf(fr,"%d",&zber)!=EOF)
	{
		sucet = sucet + zber;
		i++;
	}
	
	pocet = i;
	priemer= (float) sucet / pocet;
	
	printf("\n Ziaci nazbierali %d kg  papiera.", sucet);
	printf("\n Priemerne %f kg.", priemer);
	
	if(fclose(fr)==EOF) // al sa subor nepodarli zatvorit
	{
	printf("\n Subor sa neda uzatvorit \n");
		return 1;
	
}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

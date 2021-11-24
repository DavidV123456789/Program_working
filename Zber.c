#include<stdio.h>

int main(){
	FILE *fr;
	int i, sucet;
	int n = 10;
	
	int pole[10];
	
	if((fr=fopen("Zber.txt","r"))==NULL)
	{
		printf("Nepodarilo sa otvorit subor");
		return 1;
	}
	sucet =0;
	for(i=0;i<n;i++)
	{
		fscanf(fr,"%d", &pole[i]);
	}
	for(i=0;i<n;i++)
	{
		sucet = sucet + pole[i];
	}
	
	printf("Ziaci nazbierali %d kg  papiera.", sucet);
	
	if(fclose(fr)==EOF) // al sa subor nepodarli zatvorit
	{
	printf("\n Subor sa neda uzatvorit \n");
		return 1;
	
}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include<stdio.h>

int main()
{
	
	FILE *fr;	//otvorenie pre citanie
	int a, b, c, sucet; 
	
	if((fr=fopen("cisla2.txt","r"))==NULL)
	{
		printf("Napodarilo sa otvorit subor");
		return 1;
	}
	
		sucet=0;
		if(fscanf(fr,"%d %d %d", &a, &b, &c) == 3) // zistí èi sa naèítajú 3 hodnoty
		{
		
		sucet=a+b+c;
		printf("Sucet prvych troch cisel zo suboru: %d", sucet);
		
	}
		else{
			printf("V subore sa nenachadzaju 3 hodnoty \n");
		}
		
		
	if(fclose(fr)==EOF) // al sa subor nepodarli zatvorit
	{
	printf("\n Subor sa neda uzatvorit \n");
		return 1;
	
}
	return 0;
}

#include<stdio.h>

int main()
{
	
	FILE *fr;	//otvorenie pre citanie
	int a, b, c, sucet; 
	
	if((fr=fopen("cisla.txt","r"))==NULL)
	{
		printf("Napodarilo sa otvorit subor");
		return 1;
	}
	else
	{
		sucet=0;
		fscanf(fr,"%d %d %d", &a, &b, &c);
		sucet=a+b+c;
		printf("Sucet prvych troch cisel zo suboru: %d", sucet);
		
	}
	fclose(fr);
	
	return 0;
}

#include<stdio.h>


int main(){
	
	FILE *fw;	//otvorenie suboru
	int i, n;
	
	printf("Zadaj pocet prirodzenych cisel: ");
	scanf("%d",&n);
	if((fw=fopen("pokus.txt","w"))==NULL)	//ak nastala chyba pri otvarani suboru
	{
		printf("Napodarilo sa otvorit subor");
		return 1;	//ukoncenie programu
	}
	else{
		for(i=1;i<=n;i++){
			fprintf(fw,"%d \n", i);
		}
	}
	
	fclose(fw);
	
	return 0;
}

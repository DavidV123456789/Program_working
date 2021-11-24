#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	FILE *fw;	//otvorenie suboru
	int i, n, k;
	srand(time(0));
	
	printf("Zadaj pocet prirodzenych cisel: ");
	scanf("%d",&n);
	if((fw=fopen("pokus.txt","w"))==NULL)	//ak nastala chyba pri otvarani suboru
	{
		printf("Napodarilo sa otvorit subor");
		return 1;	//ukoncenie programu
	}
	else{
		for(i=1;i<=n;i++){
			k= rand() % 100;
			fprintf(fw,"%d \n", k);
		}
	}
	
	fclose(fw);
	
	return 0;
}

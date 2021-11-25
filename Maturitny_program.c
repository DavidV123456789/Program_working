//V divadle sú 4 rady po 6 sedaèiek. Zadajte poèet vstupeniek a zistite èi sú ved¾a seba vo¾né miesta. Ak áno, vypíšte èíslo rady a èíslo ståpca prvej sedaèky
//vstup: pocet vstupeniek ... 3
//vystup: cislo rady 1 od sedacky cislo 2
#include<stdio.h>

int main()
{
	int d[4][6] = {1,1,1,0,0,0,
				   0,1,1,1,0,0,
				   0,1,0,1,0,0,
				   1,0,0,0,0,1
	};
	int p;int i=0;int x=0;int t=1;int t2=1, kon=-1;int q;int y =0;
	printf("Zadajte pocet vstupeniek: ");
	scanf("%d",&p);
	if(p>6)
	{
		i=1;
		printf("MAX 6 miest v rade!!!");
		return 0;
	}
	if(p==1)
	{
		t2=0;
	}
	while(i!=1){
		
		if(d[x][y]==kon && d[x][y]!=1)
		{
			t2++;
			
		 } 
		kon=d[x][y];
		if(d[x][y]==1){
			t2=1;
			if(p==1)
	{
		t2=0;
	}
		}
		if(t2==p)
		{
			
			q=y-p+2;
			if(p==1)
			{
				printf("\n cislo rady %d od sedacky cislo %d",x+1,q-1);
			}
			else
			{
				printf("\n cislo rady %d od sedacky cislo %d",x+1,q);
			}
			return 0;
		}
		
		if(x==3 && y==5)
		{
			i++;
		}
		if(t==6)
		{
			x++;
			t2=1;
			y=0;
			t=0;
			if(p==1)
	{
		t2=0;
	}
		}
		y++;
		t++;
	}
	
	
	
	
	printf("Neexistuje take volne miesto");
	return 0;
}

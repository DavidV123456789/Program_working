//Na��tajte z textov�ho s�boru postupnos� ��slic.Vyp�te ju skomprimovan� do postupnosti obsahuj�cej po�et ��slic a ��slice, oddelujte hviezdi�kami a medzerami
#include <stdio.h>

int main()
{
	FILE *fr;
	int p, m, e;
	p=0;
	m=0;

	
	if((fr=fopen("rad.txt","r"))==NULL)
	{
		printf("Subor sa nepodarilo otvorit...");
		return 1;
	}
	else{
		while(fscanf(fr,"%d",&e)!=EOF)
		{
			if(e==p)
			{
				m++;
			}
			else
			{
				if(m!=0)
				{
				printf("%d*%d ",p,m);
			}
			p=e;
			m=1;
			}
		}
		
		
	}
	
	printf("%d*%d ",p,m);
	
	
	
	
	if(fclose(fr)==EOF) 
	{
	printf("\n Subor sa neda uzatvorit \n");
		return 1;
}
	return 0;
}

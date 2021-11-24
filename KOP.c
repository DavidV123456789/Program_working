//program ktory bude citat iny subor po znakoch a vytvori jeho kopiu
#include<stdio.h>

int main(){
	FILE *fr;
	FILE *fw;
	
	char c;
	
	if((fr=fopen("org.txt","r"))==NULL)
	{
		printf("Subor org.txt sa neda tvorit");
		return 1;
	}
	if((fw=fopen("kop.txt","w"))==NULL)
	{
		printf("Subor kop.txt sa neda tvorit");
		return 1;
	}
	
	while((c=getc(fr))!=EOF)
	{
	
		putc(toupper(c),fw);
	}
	
	
	if(fclose(fr)==EOF)
	{
		printf("Subor org.txt sa nedalo zatvorit");
		return 1;
	}
	if(fclose(fw)==EOF)
	{
		printf("Subor kop.txt sa nedalo zatvorit");
		return 1;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

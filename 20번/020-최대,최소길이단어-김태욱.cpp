#include<stdio.h>
#include<string.h>
char lenwow[500];
char bigword[500];
char smallword[500];
int i,j,k,l=9999999,m,len;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    fscanf(in,"%d", &m);
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%s", &lenwow);
		len=strlen(lenwow);
        if(len>k) 
		{
			k=len;
		    strcpy(bigword,lenwow);
		}
		else if(len<l)
		{
			l=len;
			strcpy(smallword,lenwow);
		}
	}
	fprintf(out,"%s\n%s", bigword,smallword);
    fcloseall();
	return 0;
}
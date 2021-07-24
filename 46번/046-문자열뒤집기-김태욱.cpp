#include<stdio.h>
#include<string.h>
char munja[500];
int i,j,k,m,n,s;
int munjalen;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fgets(munja,256,in);
	munjalen=strlen(munja);
	for(i=munjalen-1;i>=0;i--)
	{
		fprintf(out,"%c", munja[i]);
	}
	fcloseall();
	return 0;
}
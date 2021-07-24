#include<stdio.h>
int a,b,c;
int i,j,k,m,n,s;
int jjakcount, holcount;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    fscanf(in,"%d %d %d", &a, &b, &c);
	if(a%2==0) jjakcount++;
	if(b%2==0) jjakcount++;
	if(c%2==0) jjakcount++;
	if(a%2==1) holcount++;
	if(b%2==1) holcount++;
	if(c%2==1) holcount++;


	if(jjakcount==3)
	{
		fprintf(out,"2");
	}
    if(holcount==3) 
	{
		fprintf(out,"1");
	}
	if(jjakcount==1 && holcount==2) 
	{
		fprintf(out,"1");
	}
	if(jjakcount==2 && holcount==1)
	{
		fprintf(out,"2");
	}
	
	fcloseall();
	return 0;
}

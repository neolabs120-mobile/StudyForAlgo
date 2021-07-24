#include<stdio.h>
int i,j,k,l,m;
double wongum,year,yunre;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%lf%lf%lf", &yunre,&wongum,&year);
	yunre=1+yunre/100;
	for(i=1;i<=year;i++)
	{
		wongum*=yunre;
	}
	fprintf(out,"%d", (int)wongum);
}

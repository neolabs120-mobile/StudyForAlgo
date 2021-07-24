#include<stdio.h>
int i,j;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	for(i=1;i<=1000;i++)
	{
		for(j=1;j<=1000;j++)
		{
			fprintf(out,"1");
		}
		fprintf(out,"\n");
	}
	fcloseall();
	return 0;
}

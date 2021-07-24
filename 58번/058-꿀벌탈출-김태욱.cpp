#include<stdio.h>
int fibo[50];
int i,j,n;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");

	fscanf(in,"%d", &n);

	fibo[1]=1; fibo[2]=1;

	for(i=3;i<=n;i++)
	{
        fibo[i]=fibo[i-1]+fibo[i-2];
	}

	fprintf(out,"%d", fibo[n]);
    
	fcloseall();
	return 0;
}


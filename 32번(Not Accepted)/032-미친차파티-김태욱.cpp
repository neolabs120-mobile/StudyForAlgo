#include<stdio.h>
int fibo[50000];
int i,j,k,m,n,s;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	fibo[1]=1;
	fibo[2]=1;
	fibo[3]=1;
	fibo[4]=2;
	fibo[5]=4;
	for(i=6;i<=n;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	fprintf(out,"%d", fibo[n]);
	fcloseall();
	return 0;
}

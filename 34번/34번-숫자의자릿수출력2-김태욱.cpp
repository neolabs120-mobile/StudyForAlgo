#include<stdio.h>
int array[50];
int i,j,k,m,n,s;
int gop=1;
int sum;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &array[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		gop*=10;
	}
	for(i=1;i<=n;i++)
	{
		sum+=array[i]*gop;
		gop=gop/10;
	}
	fprintf(out,"%d", sum);
	fcloseall();
	return 0;
}


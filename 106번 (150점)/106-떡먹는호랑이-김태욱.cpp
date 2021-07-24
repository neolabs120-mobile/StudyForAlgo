#include<stdio.h>
int fibo[10000001];
int i,j,k,n,m;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &n,&m);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			fibo[1]=i;
			fibo[2]=j;
			for(k=3;k<=n;k++)
			{
				fibo[k]=fibo[k-1]+fibo[k-2];
			}
			if(fibo[n]==m) 
			{
				if(i<j) fprintf(out,"%d\n%d", i,j);
				fcloseall();
				return 0;
			}
		}
	}
	fcloseall();
	return 0;
}

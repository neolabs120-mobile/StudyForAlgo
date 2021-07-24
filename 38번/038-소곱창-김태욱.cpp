#include<stdio.h>
#include<string.h>
int a;
int b;
int abae[50], bbae[50];
int asum,bsum;
int alen,blen;
int sum,imsi1,imsi2;
int backup;
int i,j,k,m,n,s;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &a, &b);
	for(i=1;i<=10;i++)
	{
		abae[i]=a%10;
		a=a/10;
	}
	for(i=1;i<=10;i++)
	{
		bbae[i]=b%10;
		b=b/10;
	}
	for(i=1;i<=10;i++)
	{
		backup=0;
		for(j=1;j<=10;j++)
		{
			backup=abae[i]*bbae[j];
			sum+=backup;
		}
	}
	fprintf(out,"%d", sum);
	fcloseall();
	return 0;
}

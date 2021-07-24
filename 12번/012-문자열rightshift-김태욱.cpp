#include<stdio.h>
int n,i,j,k;
char leftalpa[36],rightalpa[36];
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	n=n%26;
	k=n;
    for(i=0;i<26-n;i++)
	{
		rightalpa[i]=i+'A';
	}
	for(n-=1;n>=0;n--)
	{
		leftalpa[n]='Z'-n;
	}
	for(k-=1;k>=0;k--)
	{
		fprintf(out,"%c", leftalpa[k]);
	}
	for(i=0;i<26-n;i++)
	{
		fprintf(out,"%c", rightalpa[i]);
	}
	fcloseall();
	return 0;
}
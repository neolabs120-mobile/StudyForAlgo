#include<stdio.h>
int x[101];
int y[101];
int i,j,k;
int n,m,t,l;
int main(void)
{
    FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d %d %d", &n, &m, &t, &l);
	for(i=1;i<=t;i++)
	{
		fscanf(in,"%d %d", &x[i], &y[i]);
	}
	for(i=1;i<=t;i++)
	{
		for(j=1;j<=t;j++)
		{


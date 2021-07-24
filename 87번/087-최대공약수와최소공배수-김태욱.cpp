#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int n,m,x,y,backup;
void function(int x,int y)
{
	if(y==0)
	{
		fprintf(out,"%d %d", x, n*m/x);
		return;
	}
	function(y,x%y);
}
int main(void)
{
	fscanf(in,"%d %d", &n, &m);
	if(n<m)
	{
		backup=n;
		n=m;
		m=backup;
	}
	function(n,m);
	return 0;
}

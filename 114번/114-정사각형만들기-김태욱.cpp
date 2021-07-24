#include<stdio.h>
int n,m,loop;
int i,j,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &n,&m);
	loop=n;
	for(i=loop;i>=1;i--)
	{
		for(j=1;j>=1;j--)
		{
			count++;
			fprintf(out,"%d %d\n", count, n*m);
			m--;
			n--;
		}
	}
	fcloseall();
	return 0;
}

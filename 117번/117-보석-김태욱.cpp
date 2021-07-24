#include<stdio.h>
int x[101];
int y[101];
int i,j,s,big;
int n,m,t,k;
int count;
int rex,rey;
int nex,ney;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d %d %d", &n, &m, &t, &k);
	for(i=1;i<=t;i++)
	{
		fscanf(in,"%d %d", &x[i], &y[i]);
	}
	for(i=1;i<=t;i++)
	{
		for(j=1;j<=t;j++)
		{
			rex=x[i];
			rey=y[j];
			nex=rex+k;
			ney=rey-k;
			if(rex<=0 || rey<=0 || nex<=0 || ney<=0) continue;
			for(s=1;s<=t;s++)
			{
				if(x[s]>=rex && x[s]<=nex && y[s]<=rey && y[s]>=ney)
				{
					count++;
				}
			}
			if(big<count) big=count;
			count=0;
			rex=0;
			rey=0;
			nex=0;
			ney=0;
		}
	}
	fprintf(out,"%d", big);
	fcloseall();
	return 0;
}
				


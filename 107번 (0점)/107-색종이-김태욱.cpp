#include<stdio.h>
int map[101][101];
int i,j,k,m,n,s,x,y,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d %d", &x, &y);
		for(j=x;j<=x+9;j++)
		{
			for(k=y;k<=y+9;k++)
			{
				map[j][k]=1;
			}
		}
	}
	for(i=1;i<=101;i++)
	{
		for(j=1;j<=101;j++)
		{
		//	fprintf(out,"%d ", map[i][j]);
		    if(map[i][j]!=0)count++;
		}
	//	fprintf(out,"\n");
	}
	fprintf(out,"%d", count);
	fcloseall();
	return 0;
}
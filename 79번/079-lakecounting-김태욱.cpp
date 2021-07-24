#include<stdio.h>
char input[1001][1001];
int lake[1001][1001];
int chk[1001][1001];
int fx[1000001], fy[1000001];
int nx[9]={-1,0,1,1,1,0,-1,-1,0};
int ny[9]={1,1,1,0,-1,-1,-1,0,0};
int sx,sy;
int ex,ey;
int tx,ty;
int f,s;
int i,j,k,m,n;
int count,tot,flag;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &n,&m);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%s", &input[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=m;j>=1;j--)
		{
			input[i][j]=input[i][j-1];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(input[i][j]=='W')
			{
				lake[i][j]=1;
			}
			else if(input[i][j]=='.')
			{
				lake[i][j]=0;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(lake[i][j]==1 && chk[i][j]==0)
			{
				tot++;
				f=s=1; fx[f]=i; fy[f]=j;
				while(f<=s)
				{
					for(k=0;k<9;k++)
					{
						tx=fx[f]+nx[k];
						ty=fy[f]+ny[k];
						if(tx>0 && ty>0 && tx<=n && ty<=m)
						{
							if(lake[tx][ty]==1 && chk[tx][ty]==0)
							{
								chk[tx][ty]=1;
								s++;
								fx[s]=tx;
								fy[s]=ty;
								flag=1;
							}
						}
					}
					f++;
				}
			}
			for(k=1;k<=s;k++)
			{
				fx[k]=0;
				fy[k]=0;
			}
		}
	}
	fprintf(out,"%d", tot);
/*	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			fprintf(out,"%4d", chk[i][j]);
		}
		fprintf(out,"\n");
	}   */
	fcloseall();
	return 0;
}



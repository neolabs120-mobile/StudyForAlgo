#include<stdio.h>
char input[101][101];
int map[101][101];
int chk[101][101];
int fx[1000001], fy[1000001];
int nx[4]={0,-1,0,1};
int ny[4]={-1,0,1,0};
int f,s;
int i,j,k,b;
int n,m;
int tx,ty;
int sx,sy,sx2,sy2,result;
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
				map[i][j]=0;
			}
			else if(input[i][j]=='L')
			{
				map[i][j]=1;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(map[i][j]==1)
			{
				f=s=1; fx[f]=i; fy[f]=j; chk[i][j]=1;
				while(f<=s)
				{
					for(k=0;k<4;k++)
					{
						tx=fx[f]+nx[k];
						ty=fy[f]+ny[k];
						if(tx>0 && ty>0 && tx<=n && ty<=m)
						{
							if(map[tx][ty]==1 && chk[tx][ty]==0)
							{
								chk[tx][ty]=chk[fx[f]][fy[f]]+1;
								s++;
								fx[s]=tx;
								fy[s]=ty;
							}
						}
					}
					f++;
				}
				if(chk[fx[s]][fy[s]]>result)
				{
					result=chk[fx[s]][fy[s]];
				}
				for(k=1;k<=s;k++)
				{
		            fx[i]=0; fy[i]=0;
				}
				for(k=1;k<=n;k++)
				{
					for(b=1;b<=m;b++)
					{
						chk[k][b]=0;
					}
				}
			}
		}
	}
	fprintf(out,"%d", result-1);
	fcloseall();
	return 0;
}


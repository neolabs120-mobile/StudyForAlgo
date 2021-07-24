#include<stdio.h>
char input[101][101];
int map[101][101];
int chk[101][101];
int fx[1000001], fy[1000001];
int nx[9]={-1,0,1,1,1,0,-1,-1,0};
int ny[9]={1,1,1,0,-1,-1,-1,0,0};
int f,s;
int i,j,k,n,m;
int sx,sy;
int ex,ey;
int tx,ty;
int flag,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d %d %d", &n, &m, &sx, &sy);
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
			if(input[i][j]=='.')
			{
				map[i][j]=0;
			}
			else if(input[i][j]=='X')
			{
				map[i][j]=1;
			}
		}
	}
    f=s=1; fx[f]=sx; fy[f]=sy; 
	while(f<=s)
	{
		for(i=0;i<9;i++)
		{
			tx=fx[f]+nx[i];
			ty=fy[f]+ny[i];
			if(tx>0 && ty>0 && tx<=n && ty<=m)
			{
				if(map[tx][ty]==1 && chk[tx][ty]==0)
				{
				     chk[tx][ty]=1; 
					 s++; 
					 fx[s]=tx; 
					 fy[s]=ty;
				}
			}
		}
		f++;
	}
/*	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			fprintf(out,"%4d", chk[i][j]);
		}
		fprintf(out,"\n");
	}
	fprintf(out,"\n");   */

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(chk[i][j]==1)
			{
				if(chk[i+1][j]==0)
				{
					count++;
				//	chk[i+1][j]=2;
				}
				if(chk[i-1][j]==0)
				{
					count++;
				//	chk[i-1][j]=2;
				}
				if(chk[i][j+1]==0)
				{
				    count++;
				//	chk[i][j+1]=2;
				}
				if(chk[i][j-1]==0)
				{
					count++;
				//	chk[i][j-1]=2;
				}
			}
		}
	}
/*	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			fprintf(out,"%4d", chk[i][j]);
		}
		fprintf(out,"\n");
	}    
	fprintf(out,"\n");   */
	fprintf(out,"%d", count);
	fcloseall();
	return 0;
}
						 


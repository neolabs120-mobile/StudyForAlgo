#include<stdio.h>
char input[101][101];
int map[101][101];
int paper[101][101];
int fx[1000001], fy[10000001];
int nx[4]={0,-1,0,1};
int ny[4]={-1,0,1,0};
int f,s;
int i,j,k;
int n;
int tx,ty;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++) fscanf(in,"%s", &input[i]);
    for(i=1;i<=n;i++) 
	{
		for(j=n;j>=1;j--)
		{
		    input[i][j-1]=input[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			map[i][j]=input[i][j]-48;
		}
	}
	f=s=1; fx[f]=1; fy[f]=1; map[1][1]=1;
	while(f<=s)
	{
		for(i=0;i<4;i++)
		{
			tx=fx[f]+nx[i];
			ty=fy[f]+ny[i];
			if(tx>0 && ty>0 && tx<=n && ty<=n)
			{
				if(map[tx][ty]==0)
				{
					s++;
					fx[s]=tx;
					fy[s]=ty;
					map[tx][ty]=map[fx[f]][fy[f]]+1;
				}
			}
		}
		f++;
	}
	
	fcloseall();
	return 0;
}

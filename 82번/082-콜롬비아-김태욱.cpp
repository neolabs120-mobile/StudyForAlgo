#include<stdio.h>
int map[101][101];
int chk[101][101];
int fx[1000001], fy[1000001];
int result[1000001];
int nx[5]={-1,0,1,0,0};
int ny[5]={0,-1,0,1,0};
int f,s;
int i,j,k;
int n;
int x,y;
int tx,ty;
int backup,count=1,chunk,tot=1;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			fscanf(in,"%d %d", &x,&y);
			map[x][y]=i;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(map[i][j]==0)
			{
				map[i][j]=n;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
            f=s=1; fx[f]=i; fy[f]=j;
			while(f<=s)
			{
				tot=map[i][j];
				for(k=0;k<5;k++)
				{
					tx=fx[f]+nx[k];
					ty=fy[f]+ny[k];
					if(tx>0 && ty>0 && tx<=n && ty<=n)
					{
						if(chk[tx][ty]==0 && map[tx][ty]==tot)
						{
							chk[tx][ty]=1;
							s++;
							fx[s]=tx;
							fy[s]=ty;
                            backup++;
						}
					}
				}
				f++;
			}
			if(backup!=0)
			{
				result[count]=count;
				count++;
				backup=0;
			}
			for(k=1;k<=s;k++)
			{
				fx[k]=0;
				fy[k]=0;
			}
		}
	}
	count=count-1;
	if(count==n) fprintf(out,"good");
	else if(count!=n) fprintf(out,"wrong");
    fcloseall();
    return 0;
}


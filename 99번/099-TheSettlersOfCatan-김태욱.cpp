#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int map[101][101];
int visit[101];
int i,j,k,m,n,s;
int x,y,a,b,max=-9999,result;
void dfs(int i, int cnt)
{
    int j; 
	if(max<cnt) max=cnt;
	for(j=0;j<=n-1;j++)
	{
		if(map[i][j]==1) 
		{
		    map[i][j]=map[j][i]=0;
			dfs(j,cnt+1);
			map[i][j]=map[j][i]=1;
		}
	}
//	for(k=0;k<=n-1;k++) visit[k]=0;
}

int main(void)
{
	fscanf(in,"%d %d", &n,&m);
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%d %d", &a,&b);
		map[a][b]=map[b][a]=1;
	}
	for(i=0;i<=n-1;i++)
	{
		dfs(i,0);
	}
    fprintf(out,"%d", max);
	fcloseall();
	return 0;
}


		




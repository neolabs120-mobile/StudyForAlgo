#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int map[101][101];
int visit[101];
int i,j;
int m,n;
int a,b;
int x,y;
int cnt;
int count;
void dfs(int i, int cnt)
{
	int j;
	for(j=1;j<=n;j++)
	{
		if(map[i][j]==1 && visit[j]==0)
		{
			visit[j]=1;
			dfs(j, cnt+1);
		}
	}
	return;
}
int main(void)
{
	fscanf(in,"%d %d", &n, &m);
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%d %d", &a, &b);
		map[a][b]=1;
		map[b][a]=1;
	}
	visit[1]=1;
	dfs(1,1);
	for(i=1;i<=n;i++)
	{
		if(visit[i]==1)
		{
			count++;
		}
	}
    fprintf(out,"%d", count-1);
	return 0;
}


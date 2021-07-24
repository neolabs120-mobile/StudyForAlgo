#include<stdio.h>
int map[1001][1001];
int color[1001][1001];
int visit[1001];
int i,j,k,m,n,s,flag=1;
void dfs(int i, int chk)
{
    int j;
	for(j=0;j<=n-1;j++)
	{
          
	}
}
		
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &n, &m);
	int x,y;
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%d %d", &x, &y);
		map[x][y]=1;
	}
	visit[0]=1;
	dfs(0,1);
	if(flag==1) 
	{
		fprintf(out,"BICOLORABLE");
	}
	else if(flag==0)
	{
		fprintf(out,"NOT BICOLORABLE");
	}
	fcloseall();
	return 0;
}
	

#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int map[101][101];
int output[101][101];
int number[101];
int visit[101];
int i,j,k,m,n,s,count,a,b,x,y,flag,flag2,plus,cnt;
void dfs(int i, int cnt)
{
	int j;
    if(i==y)
	{
		fprintf(out,"%d", cnt-1);
		flag=1;
		return;
	}
	for(j=1; j<=n; j++)
	{
        if(map[i][j]==1 && visit[j]==0)
		{
			visit[j]=1;
	    	dfs(j,cnt+1);
		}
	}
//	fprintf(out,"%d", cnt-1);
	return;
}
int main(void)
{
	fscanf(in,"%d", &n);
	fscanf(in,"%d %d", &x,&y);
	fscanf(in,"%d", &m);
	int a,b;
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%d %d", &a, &b);
        map[a][b]=map[b][a]=1;
	}
	visit[x]=1;
	dfs(x,1);
	if(flag==0) fprintf(out,"-1");
//	fprintf(out,"%d", cnt-1);
	fcloseall();
	return 0;
}
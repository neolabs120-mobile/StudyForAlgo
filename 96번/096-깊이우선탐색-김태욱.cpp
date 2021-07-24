#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int i,j,k,m,n,s;
char x,y;
int map[101][101];
int visit[27];
void dfs(int i)
{
	int j;
	for(j=1;j<=n;j++)
	{
		if(map[i][j]==1 && visit[j]==0)
		{
			fprintf(out,"%c", j+65);
			visit[j]=1;
			dfs(j);
		}
	}
}
int main(void)
{
    char a,b,st;
	fscanf(in,"%d %d\n", &n,&m);
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%c %c\n", &a, &b);
		map[a-65][b-65]=map[b-65][a-65]=1;
	}
	fscanf(in,"%c", &st);
	fprintf(out,"%c", st);
	visit[st-65]=1;
	dfs(st-65);
	fprintf(out,"\n");
	fcloseall();
	return 0;
}

	

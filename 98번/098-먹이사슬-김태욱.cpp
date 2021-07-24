#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int map[201][201];
int chk[201][201];
int output[201][201];
int number[201];
int visit[201];
int i,j,k,m,n,s,count,a,b,x,y,flag,flag2,big,print,plus,countbig,max=-9999,result;
void dfs(int i,int plus)
{
	int j;
	if(max<plus) max=plus;
	for(j=1; j<=n; j++)
	{
        if(map[i][j]==1 && visit[j]==0)
		{
			visit[j]=1;
			dfs(j, plus+1);
		}
		for(int k=1;k<=n;k++) visit[k]=0;
	}
}
int main(void)
{
	fscanf(in,"%d", &n);
	fscanf(in,"%d", &m);
	int a,b;
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%d %d", &a, &b);
        map[a][b]=1;
	}
	for(i=1;i<=n;i++)
	{
		visit[i]=1;
		dfs(i, 1);
		if(result<max) result=max;
		max=-9999;
	}
/*	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d", map[i][j]);
		}
		printf("\n");
	}    */
	fprintf(out,"%d", result);
    fcloseall();
	return 0;
}

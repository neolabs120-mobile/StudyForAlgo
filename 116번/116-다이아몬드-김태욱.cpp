#include<stdio.h>
char input[2001][2001];
int map[2001][2001];
int neo[2001][2001];
int x[5];
int y[5];
int i,j,k;
int small=9999999,flag,big;
int n,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
	    fscanf(in,"%s", &input[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			input[i][j]=input[i][j-1];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(input[i][j]=='x')
			{
				map[i][j]=1;
			}
			else if(input[i][j]=='.')
			{
				map[i][j]=0;
			}
		}
	}
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(map[i][j]==1)
			{
			x[1]=i-1; y[1]=j-1;
			x[2]=i-1; y[2]=j;
			x[3]=i-1; y[3]=j+1;
			x[4]=i-2; y[4]=j;
			for(k=1;k<=4;k++)
			{
				if(x[k]<=0 || y[k]<=0 || map[x[k]][y[k]]==0)
				{
					small=999999;
                    x[1]=0; x[2]=0; x[3]=0; x[4]=0;
			        y[1]=0; y[2]=0; y[3]=0; y[4]=0;
					flag=1;
					break;
				}
				if(small > neo[x[k]][y[k]])
				{
					small=neo[x[k]][y[k]];
				}
			}
			if(flag==1){ 
				flag=0;
			}
			else{
				neo[i][j]=small+1;
				if(small+1 > big) big=small+1;
			}
			small=9999999;
			x[1]=0; x[2]=0; x[3]=0; x[4]=0;
			y[1]=0; y[2]=0; y[3]=0; y[4]=0;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			count=count+neo[i][j];
		}
	}
	fprintf(out,"%d", count);
    fcloseall();
	return 0;
}


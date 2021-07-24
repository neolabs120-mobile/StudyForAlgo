#include<stdio.h>
char input[1001][1001];
int map[1001][1001];
int result[1001][1001];
int big[4];
int i,j,k;
int n,m;
int a,b,c;
int mostbig=9999999;
int themostbig=0;
int count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    fscanf(in,"%d %d", &n, &m);
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
			map[i][j]=input[i][j]-'0';
		}
	}
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(map[i][j]==1)
			{
				big[1]=result[i-1][j];
				big[2]=result[i][j-1];
			    big[3]=result[i-1][j-1];
				for(k=1;k<=3;k++)
				{
					if(mostbig>big[k])
					{
						mostbig=big[k];
					}
				}
				result[i][j]=mostbig+1;
			}
			mostbig=9999999;
		}
	}
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(themostbig<result[i][j])
			{
				themostbig=result[i][j];
			}
		}
	}
	count=0;
	for(i=1;i<=themostbig;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=m;k++)
			{
				if(i<=result[j][k])
				{
					count++;
				}
			}
		}
		fprintf(out,"%d %d\n", i, count);
		count=0;
	}
/*	for(i=1;i<=n;i++)
	{=
		for(j=1;j<=m;j++)
		{
			fprintf(out,"%d ", result[i][j]);
		}
		fprintf(out,"\n");
	}  */
		

		

    

	fcloseall();
	return 0;
}
















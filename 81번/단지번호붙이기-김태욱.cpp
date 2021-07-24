#include<stdio.h>
char input[1001][1001];
int map[1001][1001];
int chk[1001][1001];
int fx[1000001], fy[1000001];
int result[1000001];
int nx[5]={0,-1,0,1,0};
int ny[5]={1,0,-1,0,0};
int count=1;
int i,j,k,n;
int f,s;
int tx,ty;
int backup;
int big;
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
			map[i][j]=input[i][j]-48;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(map[i][j]==1)
			{
				f=s=1; fx[f]=i; fy[f]=j;
				while(f<=s)
				{
					for(k=0;k<5;k++)
					{
                        tx=fx[f]+nx[k];
					    ty=fy[f]+ny[k];
						if(tx>0 && ty>0 && tx<=n && ty<=n)
						{
							if(map[tx][ty]==1 && chk[tx][ty]==0)
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
			    	result[count]=backup; 
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
	}
    count=count-1;
	for(i=1;i<=count-1;i++)
	{
		for(j=i+1;j<=count;j++)
		{
			if(result[i] > result[j])
			{
				backup=result[i];
				result[i]=result[j];
				result[j]=backup;
			}
		}
	}
    fprintf(out,"%d\n", count);
	for(i=1;i<=count;i++)
	{
		fprintf(out,"%d\n", result[i]);
	}
    fcloseall();
    return 0;
}
	
		        
				        




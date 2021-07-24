#include<stdio.h>
int dowhajichk[101][101],map[101][101];
int front[101], behind[101];
int i,j,k,m,n,s;
int backup,x,y,othercount,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    fscanf(in,"%d", &n);
	for(i=1;i<=n;i++) 
	{
		fscanf(in,"%d %d", &x, &y);
		for(j=1;j<=n;j++)
		{
	         for(k=x;k<=y+9;k++) 
			 { 
		    	map[j][k]=1;
			 }
		}
		
	}




	        for(i=1;i<=101;i++)
			{
	        	for(j=1;j<=101;j++)
				{
		        	if(map[i][j]==1)
					{
			        	if(map[i-1][j]==0) count++;
			        	if(map[i+1][j]==0) count++;
			        	if(map[i][j-1]==0) count++;
			         	if(map[i][j+1]==0) count++;
					}
				}
			}
			for(i=1;i<=25;i++)
			{
				for(j=1;j<=25;j++)
				{
					fprintf(out,"%d ", map[i][j]);
				}
				fprintf(out,"\n");
			}
	

	fprintf(out,"%d\n", count);
	fcloseall();
	return 0;
}
	

    
 

































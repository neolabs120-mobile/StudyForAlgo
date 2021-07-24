
#include<stdio.h>
int array[50001];
int result[50001];
int chk[50001];
int i,j,k,m,n,s,x;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &array[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(array[i] < array[i+1])
		{
			continue;
		}
		else if(array[i] >= array[i+1])
		{
			result[i]=1;
			chk[i]=-1;
			x=i;
			while(array[x-1] < array[x] && chk[x-1]!=-1)
			{
				x--;
				chk[x]=-1;
			}
			x=i;
			while(array[x+1] < array[x] && chk[x+1]!=-1)
			{
				x++;
				chk[x]=-1;
			}
		}
		i=x;
	}
	for(i=1;i<=n;i++)
	{
		if(result[i]==1) 
		{
			fprintf(out,"%d\n", i);
		}
	}
	fcloseall();
	return 0;
}




